#include <iostream>
#include <vector>
using std::cout;
using std::endl;

class Move {
private:
  int *data;
public:
  void set_data_val(int d){
    *data = d;
  };
  int get_data_val(){
    return *data;
  };

  Move(int d); // Constructor
  Move(const Move &source); // Copy constructor
  Move(Move &&source); // Move constructor
  ~Move(); // Destructor
};

// Constructor, allocates storage and copy
Move::Move(const Move &source){
  data = new int;
  *data = *source.data;
}

// "Steal" the data abd then null out the source pointer
Move::Move(Move &&source) : data{source.data}{
  source.data = nullptr;
}

int main(void)
{
  // Example, move class
  // Inefficient copying
  /*
    Vector<Move> vec;
    vec.push_back(Move{10});
    vec.push_back(Move{20});
    // Copy constructors will be called to copy the temps
    // What it looks like in terminal...

    Constructor for: 10
    Constructor for: 10
    Copy constructor - deep copy for: 10
    Destructor freeing data for: 10
    Constructor for: 20
    Constructor for: 20
    Copy constructor - deep copy for: 20
    Constructor for: 10
    Copy constructor - deep copy for: 10
    Destructor freeing data for: 10
    Destructor freeing data for: 20


    So what does the move constructor do?
    - Intead of making a deep copy of the move constructor
      - 'moves' the resource
      - Simply copies the address of the resource from source to the current
        object 
      - And, nulls out the pointer to the source pointer
    - Very efficient

    Syntax - r-value reference

    Type::Type(Type &&source);
    Player::Player(Player &&source);
    Move::Move(Move &&source);

    // "Steal" the data abd then null out the source pointer
    Move::Move(Move &&source) : data{source.data}{
      source.data = nullptr;
    }

    // After adding the move constructor.....

    Efficient Output:
    Constructor for: 10
    Move constructor - moving resource: 10
    Destructor freeing data for nullptr
    Constructor for: 20
    Move constructor - moving resource: 20
    Move constructor - moving resource: 10
    Destructor freeing data for nullptr
    Destructor freeing data for nullptr
    Destructor freeing data for: 10
    Destructor freeing data for: 20

  */

  return 0;
}

/*
  Move Constructor: introduced in C++11
  - Sometimes when we execute code the compiler creates unnamed temporary values

    int total {0};
    total = 100 + 200;
  - 100 + 200 is evaluated and 300 stored in an unnamed temp value
  - the 300 is then stored in the variable total
  - then the temp value is discarded 
  - the same happens with object as well

  When is it useful?
  - Sometimes copy constructors are called many times automatically due to the
    copy semantics of c++.
  - Copy constructors doing deep copying can have a significant performance
    bottleneck
  - C++11 introduced move semantics and the move constructor
  - Move constructor moves an object rather than copy it
  - Optional but recommended whne you have a raw pointer
  - Copy elision - C++ may optimize copying away completely (RVO-Return Value
    Optimization)
  

  r-value references:
  - Used in moving semantics and perfect forwarding 
  - Move semantics is all about r-value references
  - used by move constructor and move assignment operator to efficiently move an
    object rather than copy it
  - r-value reference operator (&&)

  r-value references:

    int x {100}; // l-value reference
    int &l_ref = x;
    l_ref = 10; // change x to 10

    int &&r_ref = 200; // r-value ref
    r_ref = 300; // change r_ref to 300

    int &&x_ref = x; // Compiler error



    l-value reference parameters:

    int x {100}; // x is an l-value
    void func(int &num); // A

    func(x); // calls A - x is an l-value
    func(200); // Error - 200 is an r-value


    r-value reference parameters:

    int x {100};
    void func(int &&num); // B
    func(200); // calls B - 200 is an r-value
    func(x); // Error - x is an l-value
    error: cannot bind rvalue reference of type 'int&&' to lvalue of type 'int'


    l-value and r-value reference parameters:
    int x {100}; // x is an l-value
    void func(int &num); // A
    void func(int &&num); // B

    func(x); // calls A - x is an l-value
    func(200); // calls B - 200 is an r-value

    Examples: Check main above^
*/ 