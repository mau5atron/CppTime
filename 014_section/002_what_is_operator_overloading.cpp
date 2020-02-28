#include <iostream>
// example that will be used
class Mystring
{
private: 
  char *str; // c-style string
public:
  // no args contructor
  Mystring();
  // constructor
  Mystring(const char *s);
  // copy constructor
  Mystring(const Mystring &source);
  // destructor
  ~Mystring();

  void display() const;
  int get_length() const;
  const char *get_str() cosnt;
};

int main(void)
{
  return 0;
}

/*
  What is operator overloading?:
    * Using traditional operators such as +, =, *, etc. with user-defined types
    * Allows user defined types to behave similar to built-in types
    * Can make code more readable
    * Not done automatically ( except for the assignment operator )
    
  What does Operator Overloading look Like?:

    - Suppose we have a Number class that models any number
    - Using functions:

      Number result = multiply(add(a,b), divide(c, d));

    - Using member methods:

      Number result = ( a.add(b) ).multiply( c.divide(d) );

    - Suppose we have a Number class that models any number 
      * Using overloaded operators
      
        Number result = (a + b)*(c/d);

  What operators can be overloaded?

    - The majority of C++ operators can be overloaded
    - The following operators cannot be overloaded

      * Scope resolution operator: ( :: )
      * Conditional operator: ( :? )
      * Pointer-to-member operator: ( .* )
      * Dot operator: ( . )
      * sizeof
    - Just because an operator can be overloaded, does not mean that you always
      should
  
  Operator Overloading Rules:
    - Precedence and Associativity cannot be changed
    - 'arity' cannot be changed (i.e. can't make the division operator unary)
    - Can't overload operators for primitive type (e.g. int, double, etc.)
    - Can't create new operators
    - [], (), ->, and the assignment operator ( = ) must be declared as member
      methods
    - Other operators can be declared as member methods or global functions
  
  Examples where operator overloading can be used:

    - int 
      a = b + c
      a < b
      std::cout << a
    
    - double 
      a = b + c
      a < b
      std::cout << a

    - long
      a = b + c
      a < b
      std::cout << a
    - string
      s1 = s2 + s3
      s1 < s2
      std::cout << s1
    - MyString
      s1 = s2 + s3
      s1 < s2
      s1 == s2
      std::cout << s1
    - Player
      p1 < p2
      p1 == p2
      std::cout << p1

  Follow example in main()^
*/
