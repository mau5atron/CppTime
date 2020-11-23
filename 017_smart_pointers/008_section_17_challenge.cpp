/*
  Section 17 Challenge
  - Write a program that gets user input to allocate items in a vector
  - Once the user enters how many items should be in vector, collect the values
    for the vector from the user
  - Then the program should display the values from the vector of smart pointers
  - destructors should automatically be called because we are working with smart
    pointers

  - can't call new or delete
*/

#include <iostream>
#include <memory>
#include <vector>

typedef struct Test {
private:
  int data;

public:

  Test(){
    data = 0;
    std::cout << "Initializing data with default constructor val {" << data << "}\n";
  }

  Test( int in_data ){
    data = in_data;
    std::cout << "Initializing data with input data constructor val {" << data << "}\n";
  }

  ~Test(){
    std::cout << "Destructor called for value: {" << data << "}\n";
  }

  int get_data(){
    return data;
  }

} Test;

// function prototypes

std::unique_ptr< std::vector< std::shared_ptr<Test> > > make();
void fill_vec( std::vector< std::shared_ptr<Test> > &vec, int num );
void display( const std::vector< std::shared_ptr<Test> > &vec );

std::unique_ptr< std::vector< std::shared_ptr<Test> > > make(){
  return std::make_unique< std::vector< std::shared_ptr<Test> > >();
}

void fill_vec( std::vector< std::shared_ptr<Test> > &vec, int num ){
  int input;

  for ( int i = 0 ; i < num; i++ ){
    std::cout << "\ninput for vec[" << i << "]: ";
    std::cin >> input;

    vec.push_back( std::make_shared<Test>(input) );
  }
}

void display( const std::vector<std::shared_ptr<Test>> &vec ){
  for ( const std::shared_ptr<Test> vec_el : vec ){
    std::cout << "Vec value: " << (*vec_el).get_data() << "\n";
  }
}

int main(void){
  std::unique_ptr< std::vector< std::shared_ptr<Test> > > vec_ptr;
  vec_ptr = make(); // basically to call make_unique
  std::cout << "How many data points do want to enter?: ";
  int num;
  std::cin >> num;

  fill_vec( *vec_ptr, num );
  display( *vec_ptr );

  return 0;
}