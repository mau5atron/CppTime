#include <iostream>

int main(void)
{
  return 0;
}

/*
  Operator Overloading:

    - Unary operators as member methods ( ++, --, i, ! )

      ReturnType Type::operatorOp();

      Number Number::operator-() const;
      Number Number::operator++() const; // pre-increment
      Number Number::operator++(int); // post increment
      Number Number::operator!() const;

      Number n1 {100};
      Number n2 = -n1; // n1.operator-()
      n2 = ++n1; // n1.operator()
      n2 = n1++; // n1.operator++(int)


*/