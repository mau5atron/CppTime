/*
  Smart Pointers - Custom Deleters

  Custom Deleters:
    - Sometimes when we destroy a smart pointer we need more than to just
      destroy the object on the heap
    - These are special use-cases
    - C++ smart pointers allow you to provide custom deleters
    - Lots of ways to achieve this
      - Functions
      - Lambdas
      - Others
*/

/*
  Custom Deleters - function

    void my_deleter( Some_Class *raw_pointer ){
      // your custom deleter code
      delete raw_pointer
    }

    ...

    std::shared_ptr<Some_Class> ptr { new Some_Class{}, my_deleter }; // passing
    in the name of the custom deleter function


  Custom Deleters - function

    void my_deleter( Test *ptr ){
      std::cout << "In my custom deleter\n";
      delete ptr;
    }

    std::shared_ptr<My_Class> ptr { new My_Class{}, my_deleter };
*/

/*
  Custom Deleters - lambda expressions
  - lambda is just an anonymous function

  std::shared_ptr<Test> ptr ( new Test{100}, []( Test *ptr ){
    std::cout << "\tUsing my custom deleter\n";
    delete ptr;
  });
*/

#include <iostream>
#include <memory>
#include <string>

class Test {
private:
  int data;
public:
  Test(){
    data = 0;
    std::cout << "Constructor default val {" << data << "}\n";
  }

  Test( int in_data ){
    data = in_data;
    std::cout << "Constructor with passed in val {" << data << "}\n";
  }

  int get_data(){
    return data;
  }
};

void my_deleter( Test *ptr ){
  std::cout << "Using my custom function deleter\n";
  delete ptr;
}

int main(void){
  std::string breaker { "*****************\n" };
  {
    std::shared_ptr<Test> ptr1 { new Test{100}, my_deleter };
  }

  std::cout << breaker;

  {
    // using lambda function
    std::shared_ptr<Test> ptr2 ( new Test{200}, []( Test *ptr ){
      std::cout << "Using lambda deleter\n";
      delete ptr;
    });
  }

  return 0;
}