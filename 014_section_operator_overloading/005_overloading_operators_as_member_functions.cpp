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

  Mystring operator - make lowercase
    
    Mystring larry1 {"LARRY"};
    Mystring larry2;

    larry1.display(); // LARRY
    larry2 = -larry1; // larry1.operator-()

    larry1.display(); // LARRY
    larry2.display(); // larry

  Mystring operator - make lowercase

    Mystring Mystring::operator-() const {
      char *buff = new char[std::strlen(str) + 1];
      std::strcpy(buff, str);
      for( size_t i {0} ; i < std::strlen(buff) ; i++ ){
        buff[i] = std::tolower(buff[i]);
      }

      Mystring temp {buff};
      delete [] buff;
      return temp;
    }


  Binary Operators as member methdos (+, -, ==, !=, <, >, etc.)

    ReturnType Type::operatorOp(const &Type rhs);

    Number Number::operator+(const &Number rhs) const;
    Number Number::operator-(const &Number rhs) const;
    bool Number::operator==(const &Number rhs) const;
    bool Number::operator<(const &Number rhs) const;

    Number n1 {100}, n2 {200};
    Number n3 = n1 + n2; // n1.operator+(n2)
    n3 = n1 - n2; // n1.operator-(n2)
    if( n1 == n2 ) ... // n1.operator==(n2)

  
  Operator Overloading:
    - Mystring operator==

      bool Mystring::operator==(const Mystring &rhs) const {
        if (std::strcmp(str, rhs.str) == 0){
          return true;
        } else {
          return false;
        }
      }

      if (s1 == s2) // s1 and s2 are Mystring objects


  Mystring operator+ (concatenation)
    Mystring larry {"Larry"};
    Mystring moe {"Moe"};
    Mystring stooges {" is one of the three stooges"};
    
    Mystring result = larry + stooges; // larry.operator+(stooges)

    result = moe + " is also a stooge"; // moe.operator+("is also a stooge");

    result = "Moe" + stooges; // "Moe".operator+(stooges) ERROR

  Mystring operator+ (concatenation)

    Mystring Mystring::operator+(const Mystring &rhs) const {
      size_t buff_size = std::strlen(str) + std::strlen(rhs.str) + 1; // +1 for
      null character
      char *buff = new char[buff_size]; // allocate buffer on heap
      std::strcpy(buff, str); // copy left string 
      std::strcat(buff, rhs.str); // concatenate right side string
      Mystring temp {buff}; // initialize instance with buffer
      delete [] buff; // de-allocate buffer to not leak memory
      return temp; // return instance object
    }


*/