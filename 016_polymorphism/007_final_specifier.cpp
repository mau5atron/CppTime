#include <iostream>

int main(void)
{
  return 0;
}

/*
  Polymorphism - Using the final Specifier

    - C++ provides the final specifier
      - When used at the class level
      - Prevents a class from being derived from

      - When used a the method level
      - Prevents virtual method from being overridden in derived classes

  final used with classes:

    class My_class final
    {
      ....
    };

    class Derived final : public Base
    {

    };

  final used with functions:

    class A
    {
    public:
      virtual void do_something();
    };

    class B : public A
    {
    public:
      virtual void do_something() final; // prevents further overriding
    };

    class C : public B
    {
    public:
      virtual void do_something(); // compiler error - can't override
    };
*/