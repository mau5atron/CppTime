#include <iostream>
using std::cout;
using std::endl;

class Deep {
  private:
    int *data;
  public:
    // data setter
    void set_data_value(int d){
      *data = d;
    }

    int get_data_value(){
      return *data;
    }

    // The user-defined Constructor prototype
    Deep(int d);
    // User-defined copy constructor prototype
    Deep(const Deep &source);
    // // User-defined Destructor
    ~Deep();
};

// Defining functions scoped to Deep class

// Constructor
Deep::Deep(int d){
  data = new int;
  *data = d;
}

// Copy Constructor
Deep::Deep(const Deep &source) : Deep {*source.data} {
  cout << "Copy constructor - deep copy" << endl;
}

// Destructor
Deep::~Deep(){
  delete data;
  cout << "Destructor freeing data" << endl;
}

void display_deep(Deep s){
  cout << s.get_data_value() << endl;
}

int main(void)
{

  Deep obj1 {100};
  display_deep(obj1);

  Deep obj2 { obj1 };
  obj2.set_data_value(1000);

  return 0;
}

/*
  Deep copying with the Copy Constructor:

  User-provided copy constructor:

  - Create a copy of the pointed-to data
  - Each copy will have a pointer to unique storage in the heap
  - Deep copy when you have a raw pointer as a class data member

  Copy Constructor:
  Deep:
  
  class Deep {
  private:
    int *data; // Pointer
  public: 
    Deep(int d); // Constructor
    Deep(const Deep &source); // Copy constructor
    ~Deep(); // Destructor
  };

  // Constructor
  Deep::Deep(int d){ // function in scope of Deep class
    data = new int; // Allocate storage for constructor
    *data = d; // pass in int d to data pointer 
  }

  // Destructor
  Deep::~Deep(){
    delete data; // free the storage allocated
    cout << "Destructor freeing data" << endl;
  }

  // Copy constructor
  // This deep copy constructor is different than the shallow copy constructor
  because:
  // we dont simply copy the pointer
  // instead we allocate storage for the copy of what we are pointing to
  // and then copy the data itself over
  // we end up with an exact unique copy of the data
  Deep::Deep(const Deep &source){
    data = new int; // allocate storage
    *data = *source.data;
    cout << "Copy constructor - deep" << endl;
    // Deep copy - create new storage and copy values
  }

  // Deep copy constructor - delegating constructor

  Deep::Deep(const Deep &source) : Deep{*source.data}{
    cout << "Copy constructor - deep" << endl;

  }
  // Delegate to Deep(int) and pass in the int (*source.data) source is pointing
  to


  Deep - a simple method that expects a copy
  // when s goes out of scope the destructor is called and releases
  // 'data'. 
  // No problem: since the storage being released is unique to s
  void display_deep(Deep s){
    cout << s.get_data_value() << endl;
  }

  // Simple main, will not crash
  int main(void)
  {
    Deep obj1 {1000};
    display_deep(obj1);
    obj1.set_data_value(1000);
    Deep obj2 {obj1};
    return 0;
  }

  - Checkout main above ^
*/
