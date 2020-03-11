#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::vector;

class Move {
private:
  int *data;
public:
  void set_data(int d){
    *data = d;
  }

  int get_data(){
    return *data;
  }

  Move(int d); // Constructor

  Move(const Move &source); // Copy constructor
  // uncomment and leave copy constructor so see all the copying in progress
  // when in introduce the move constructor, instead of making so many copies,
  // we instead move the data
  Move(Move &&source) noexcept; // Move constructor

  ~Move(); // Destructor
};

Move::Move(int d){
  data = new int;
  *data = d;
  cout << "Constructor for: " << d << endl;
}

Move::Move(const Move &source) : Move{*source.data}{
  cout << "Copy constructor - deep copy for: " << *data << endl;
}

Move::Move(Move &&source) noexcept : data{source.data} {
  source.data = nullptr;
  cout << "Move constructor - moving resource: " << *data << endl;
}

// Destrucctor
Move::~Move(){
  if( data != nullptr ){
    cout << "Destructor freeing data for: " << *data << endl;
  } else {
    cout << "Destructor freeing data for nullptr" << endl;
  }

  delete data;
}

int main(void)
{
  vector<Move> vec;
  vec.push_back(Move{10});
  return 0;
}