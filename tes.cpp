#include <iostream>
#include <queue>
#include <type_traits>
#include <functional>
#include <list>

template<typename TFunc, typename... TArgs>
concept InvocableWith = std::is_invocable_v<TFunc,TArgs...>;

template<typename TFunc, typename TReturn, typename... TArgs>
concept InvocableWith_r = std::is_invocable_r_v<TReturn,TFunc,TArgs...>;

template<typename TFunc>
concept Invocable = InvocableWith<TFunc>;

template<typename TFunc, typename TReturn>
concept Invocable_r = InvocableWith_r<TFunc,TReturn>;

namespace
{
class PropertyBase{};
}
template<typename TBase>
constexpr bool is_property = std::is_base_of_v<PropertyBase,TBase>;

template<typename T>
requires(!std::is_reference_v<T> && !std::is_const_v<T> && !std::is_volatile_v<T>)
class Property : private PropertyBase
{
    static_assert(!is_property<T>,"Can't nest properties");
public:
    template<Invocable_r<T> GetterType, InvocableWith<T&&> SetterType>
    Property(GetterType _get, SetterType _set) : get(_get), set(_set)
    {}

    operator T() const
    {
        return std::invoke(get);
    }

    void operator=(const T& rhs) const
    {
        std::invoke(set, rhs);
    }

    T& operator*() const
    {
        return std::invoke(get);
    }
    
    // std::invoke_result_t<SetterType, std::add_lvalue_reference_t<std::add_const_t<T>>> operator=(std::add_lvalue_reference_t<std::add_const_t<T>> rhs) const
    // {
    //     return std::invoke(set, rhs);
    // }

private:
    std::function<T()> get;
    std::function<void(const T&)> set;
};

// template<typename T, bool RETURN_REFERENCE=true>
// class BasicProperty : public Property<T>
// {
//     T value;

// public:
//     explicit BasicProperty(T&& _value)
//     : value(_value), 
//       Property<T>(
//           [this]()->T{
//               std::cout<<"get called\n";
//               return value;
//           },
//           [this](const T& new_value)->void{
//               std::cout<<"set called";
//               value=new_value;
//           })
//     {}

//     using Property<T>::operator=;
// };

using namespace std::placeholders;
template<typename TValue, typename TContainer, TValue TContainer::* MEMBER>
class BasicPropertyReference : public Property<TValue>
{
    static void set(TContainer* const cont, const TValue& v)
    {
        std::cout<<"ref set\n";
        cont->*MEMBER=v;
    }
    static TValue& get(TContainer* const cont)
    {
        std::cout<<"ref get\n";
        return cont->*MEMBER;
    }
public:
    explicit BasicPropertyReference(TValue&& value, TContainer* const cont)
    : Property<TValue>(
        std::bind<TValue&(TContainer* const),TContainer* const>(&BasicPropertyReference::get,cont),
        std::bind(&BasicPropertyReference::set,cont,_1)
    ){
        this->operator=(value);
    }

    explicit BasicPropertyReference(TContainer* const cont)
    : Property<TValue>(
        std::bind(&BasicPropertyReference::get,cont),
        std::bind(&BasicPropertyReference::set,cont,_1)
    )
    {}
    using Property<TValue>::operator=;
};

class Test 
{
    int x;
    std::vector<int> y;
public:
    BasicPropertyReference<int,Test, &Test::x> iprop{0}; 
    BasicPropertyReference<std::vector<int>,Test,&Test::y> vprop{this};
};

int main()
{
    Test x;
    x.iprop=3;
    x.iprop=4;
    (*x.vprop).push_back(0);
    std::cout<<x.iprop;
}