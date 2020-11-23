/*
  Smart Pointer - weak_ptr

    - provides a non-owning "weak" reference
    - weak_ptr<T>
      - points to an object of type T on the heap
      - does not participate in owning relationship
      - always created from a shared_ptr
      - does NOT increment or decrement reference use count
      - used to prevent strong reference cycles which could prevent objects from
        being deleted
  
  weak_ptr - circular or cyclic reference

    - A refers to B
    - B referes to A
    - Shared strong relationship prevents heap deallocation

  weak_ptr - solution to circular or cyclic reference

    - Solution: make of the pointers non-owning or "weak"
    - No heap storage is deallocated properly
*/

#include <iostream>
#include <memory>

class B; // forward declaration

class A {
private:
  std::shared_ptr<B> b_ptr;
public:

  void set_b( std::shared<B> &b ){
    b_ptr = b;
  }

  A(){
    std::cout << "A constructor\n";
  };

  ~A(){
    std::cout << "A destructor\n";
  }
};

class B {
private:
  std::shared<A> a_ptr;
public:

  void set_a( std::shared_ptr<A> &a ){
    a_ptr = a;
  }

  B(){
    std::cout << "B constructor\n";
  }

  ~B(){
    std::cout << "B destructor \n";
  }
};

int main(void){
  std::shared_ptr<A> a = std::make_shared<A>();
  std::shared_ptr<B> b = std::make_shared<B>();

  (*a).set_b(b);
  (*b).set_a(a);

  /*
    When a and b go out of scope
    a notices that a is being referenced by something
    b notices that b is being referenced by something

    What ends up happening is that a and b gets destroyed on the stack, but the
    memory allocated for a and b remain on the heap

    way to fix this is to change B class reference to a ( std::shared_ptr<A> a )
    to ( std::weak_ptr<A> a )
    which will then actually destroy the objects in the stack and heap
  */

  return 0;
}