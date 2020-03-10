#include <iostream>

int main(void)
{
  return 0;
}

/*
  Operator Overloading: Overloading Operators as Global Functions

    - Unary operators as global functions ( ++, --, -, ! )

      ReturnType operatorOp(Type &obj); 

      // prototypes operator overloading
      Number operator-( const Number &obj );
      Number operator++( Number &obj ); // pre-increment
      Number operator++( Number &obj, int ); // post-increment
      bool operator!( const Number &obj );

      Number n1 {100};
      Number n2 {-n1}; // operator-(n1)
      n2 = ++n; // operator++(n1)
      n2 = n1++; // operator++(n1, int)


  Mystring operator- make lowercase

    Mystring larry1 {"LARRY"};
    Mystring larry2;
    larry1.display(); // LARRY
    larry2 = -larry1; // operator-(larry1)
    larry1.display(); // LARRY
    larry2.display(); // larry

  Mystring operator-
    - Often declared as 'friend' functions in the class declaration

      Mystring operator-( const Mystring &obj ){
        char *temp_buff = new char[std::strlen(obj.str) + 1];
        std::strcpy(temp_buff, obj.str);

        for( size_t i {0} ; i < std::strlen(temp_buff) ; i++ ){
          temp_buff[i] = std::tolower(temp_buff[i]);
        }

        Mystring temp { temp_buff };
        delete [] temp_buff;
        return temp; // return newly created object built from object copy buffer
      }

  Binary operators as global functions ( +, -, ==, !=, <, >, etc. )

    ReturnType operatorOp( const &Type lhs, const &Type rhs );

    Number operator+( const &Number lhs, const &Number rhs );
    Number operator-( const &Number lhs, const &Number rhs );
    
    bool operator==( const &Number lhs, const &Number rhs );
    bool operator<( const &Number lhs, const &Number rhs );

    Number n2 { 100 }, n2 { 200 };
    Number n3 = n1 + n2; // operator+(n1, n2)
    n3 = n1 - n2; // operator-(n1, n2)
    if( n1 == n2 ) ... // operator==( n1, n2 )

  
  Operator Overloading:
    Mystring operator==

      bool operator==( const Mystring &lhs, const Mystring &rhs ){
        if( std::strcmp(lhs.str, rhs.str) == 0 ){
          return true;
        } else {
          return false;
        }
      }

    - if declared as a friend of Mystring can access private str attribute
    - Otherwise must use getter methods

  Mystring operator+ ( concatenation )

    Mystring larry { "larry" };
    Mystring moe { "Moe" };
    Mystring stooges { " is one of the three stooges" };
    Mystring result = larry + stooges; // operator+(larry, stooges);

    result = moe + " is also a stooge"; // operator+(moe, "is also a stooge");

    result = "Moe" + stooges; // OK with non-member functions

  Mystring operator+ ( concatenation )

    Mystring operator+( const Mystring &lhs, const Mystring &rhs ){
      size_t buff_size = std::strlen(lhs.str) + std::strlen(rhs.str) + 1;
      char *temp_buff = new char[buff_size];
      // copy left side 
      std::strcpy(temp_buff, lhs.str);
      // concat right side
      std::strcat(temp_buff, rhs.str);

      Mystring temp { temp_buff };

      delete [] temp_buff;
      return temp; 
    }
*/