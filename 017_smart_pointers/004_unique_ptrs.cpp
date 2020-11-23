/*
  Smart Pointers:
    Unique Pointers:

    unique_ptr

    - Simple smart pointer - very efficient
    - unique_ptr<T>
      - points to an object of type T on the heap
      - It is unique - there can only be one unique_ptr<T> pointing to the
        object on the heap
      - Owns what it points to
      - Cannot be assigned or copied
      - CAN be moved
      - When the pointer is destroyed, what it points to automatically destroyed
*/

/*
  unique_ptr - creating, initializing and using

    {
      std::unique_ptr<int> p1 { new int {100} };
      std::cout << *p1 << "\n"; // 100
      *p1 = 200;
      std::cout << *p1 << "\n"; // 200
    } // automatically deleted


  unique_ptr - Some other useful methods

    {
      std::unique_ptr<int> p1 { new int { 100 } };
      std::cout << p1.get() << "\n"; // 0x564388
      p1.reset(); // p1 is now a nullptr
      if ( p1 ){
        std::cout << *p1 << "\n"; // won't execute
      }
    } // automatically deleted

  unique_ptr - user defined classes

    {
      std::unique_ptr<Account> p1 { new Account{"Larry"} };
      std::cout << *p1 << "\n"; // display account

      p1->deposit(1000);
      p1->withdraw(500);
    } // automatically deleted
*/

/*
  unique_ptr - vectors and move

    {
      std::vector< std::unique_ptr<int> > vec;
      std::unique_ptr<int> ptr { new int { 100 } };
      vec.push_back(ptr); // error - copy not allowed
      vec.push_back( std::move( ptr ) ); // vector now owns the ptr
    } // automatically deleted

  unique_ptr - make_unique( c++14 )

    {
      std::unique_ptr<int> p1 = make_unique<int>(100);
      std::unique_ptr<Account> p2 = make_unique<Account>("Curly", 5000);

      auto p3 = make_unique<Player>("Hero", 100, 100);
    } // automatically deleted

    - More efficient - no calls to "new" or "delete"
*/

#include <iostream>
#include <vector>
#include <memory>
#include <utility>

typedef struct Test {
private:
  int data;
public:

  Test(){
    data = 0;
    std::cout << "Test empty constructor data val: {" << data << "}\n";
  }

  Test( int data_init ){
    data = data_init;
    std::cout << "Test int constructor data val: {" << data << "}\n";
  }

  int get_data() const { 
    return data;
  }

  ~Test(){
    std::cout << "Test destructor clearing data val: {" << data << "}\n";
  }
} Test;

int main(void){
  Test t1 { 1000 };
  // ^ constructor and destructor are called

  /*
    Test *t1 = new Test( 1000 );
    // destructor not automatically called
    // need delete
    delete t1;
  */

  // now above example but with unique_ptr
  std::unique_ptr<Test> t2 { new Test{2000} };
  // enabled c++14 standard
  std::unique_ptr<Test> t3 = std::make_unique<Test> (3000);

  std::unique_ptr<Test> t4;
  // t4 = t1; // does not work
  t4 = std::move(t2);

  std::unique_ptr<Test> a1 = std::make_unique<Test>(5000);

  std::vector< std::unique_ptr<Test> > tests;

  tests.push_back( std::move(t3) );
  tests.push_back( std::move(t4) );
  // bottom will not work because t1 is not a unique pointer
  /* tests.push_back( std::move( t1 ) );
  tests.push_back( std::move( t2 ) );
  tests.push_back( std::move( t3 ) );
  tests.push_back( std::move( t4 ) ); */

  for ( auto &test_el : tests ){
    std::cout << (*test_el).get_data() << "\n";
  }

  return 0;
}