#include <iostream>

int main(void)
{
  return 0;
}

/*
  Operator Overloading:
    Stream insertion and extraction operators ( <<, >> )

    Mystring larry { "larry" };
    cout << larry << endl; // larry

    Player hero { "Hero", 100, 33 };
    cout << hero << endl; // { name: Hero, health: 100, xp: 33 }

    /////////////

    Mystring larry;
    cin >> larry;

    Player hero;
    cin >> hero;

    - Does not make sense to implement as member methods 
      - left operand must be a user-defined class
      - not hte way we normally use these operators

      Mystring larry;
      larry << cout; // huh?

      Player hero;
      hero >> cin; // huh?

  - Overloading the stream insertion operator ( << )

    // non member function
    // first argument is output stream object by reference
    // second argument is reference to object we want to insert in the output stream
    std::ostream &operator<<( std::ostream &os, const Mystring &obj ){
      os << obj.str; // if friend function
      // os << obj.get_str(); // if not friend function
      return os;
    }

    - Return a reference to the ostream so we can keep inserting 
    - Dont return ostream by value!


  - Overloading stream extraction operator( >> )

    std::istream &operator>>( std::istream &is, Mystring &obj ){
      char *buff = new char[1000];
      is >> buff;
      obj = Mystring { buff }; // if you have copy or move assignment
      delete [] buff;
      return is;
    }

    - return a reference to the istream so we can keep inserting
    - update the object passed in
*/