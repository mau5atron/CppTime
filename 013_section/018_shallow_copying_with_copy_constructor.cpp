#include <iostream>
using std::cout;
using std::endl;

class Shallow {
private:
  int *data;
public:
  void set_data_value(int d){
    *data = d;
  }

  int get_data_value(){
    return *data;
  }

  // Constructor
  Shallow(int d);
  // Copy constructor
  Shallow(const Shallow &source);
  // Destructor
  ~Shallow();
};

Shallow::Shallow(int d){
  data = new int;
  *data = d;
}

Shallow::Shallow(const Shallow &source)
  : data{source.data}{
    cout << "Copy constructor - shallow copy" << endl;
}

Shallow::~Shallow(){
  delete data;
  cout << "Destructor freeing data" << endl;
}

void display_shallow(Shallow s){
  // when s goes out of scope, the destructor gets called, and data is deleted
  // from heap
  cout << s.get_data_value() << endl;
}

int main(void)
{
  Shallow obj1 {100};
  // when data is deleted because s goes out of scope, s is no longer pointing
  // to the data, it is then pointing to invalid memory
  display_shallow(obj1);
  
  Shallow obj2 {obj1}; // fails because obj1 is pointing to invalid data
  obj2.set_data_value(1000);
  // this whole program fails :(
  return 0;
}

/*
  Shallow vs. Deep Copying:
  - Consider a class than contains a pointer as a data member 
  - Constructor allocates storage dynamically and initializes the pointer
  - Destructor releases the memory allocated by the constructor
  - What happens in the default copy constructor?


  Default Copy Constructor:
  - Memberwise copy
  - Each data member is copied from the source object
  - The pointer is copied NOT what it points to (shallow copy)
  - Problem: when we release the storage in the destructor, the other object
    still refers to the released storage

  // shallow copy example
  Shallow {
  private:
    int *data; // init pointer
  public:
    Shallow(int d); // constructor
    Shallow(const Shallow &source); // copy constructor

    ~Shallow(); // Destructor
  };

  // constructor
  Shallow::Shallow(int d){
    data = new int; // allocate storage
    *data = d;
  }

  // destructor
  Shallow::~Shallow(){
    delete data; // free storage
    cout << "Destructor freeing data" << endl;
  }

  // shallow copy constructor
  Shallow::Shallow(const Shallow &source)
    : data(source.data) {
      cout << "Copy constructor - shallow" << endl;
  }

  - Shallow copy: only the pointer is copied - not what it is pointing to
    Problem: 'source' and the newly created object BOTH point to the SAME 'data'
    area!
  
  Sample main:

  int main(void)
  {
    Shallow obj1 {100}; // obj1 created and memory allocated on heap with value 100
    display_shallow(obj1); // copy of obj1 will be created, when the copying of
    obj1 is done, the object will be destroyed
    // obj1's data has been release

    obj1.set_data_value(1000);
    Shallow obj2 {obj1};
    cout << "Hello world" << endl;
    return 0;
  }

  Umm... didt understand, go to main for actual example ^
*/