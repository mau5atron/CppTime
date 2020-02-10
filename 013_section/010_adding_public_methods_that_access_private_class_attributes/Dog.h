#ifndef __DOG_H__
#define __DOG_H__
#include <string>
using std::string;

class Dog {
private:
  string name;
  int age;
public:
  // adding default constructor
  Dog {
    name = "None";
    age = 0;
  }

  // adding overloaded constructor
  Dog(string name_val, int age_val){
    name = name_val;
    age = age_val;
  }

  string get_name(){
    return name;
  }

  void set_name(string n){
    name = n;
  }

  int get_age(){
    return age;
  }

  void set_age(int a){
    age = a;
  }

  int get_human_years(){
    return age * 7;
  }

  string speak(){
    return "Woof";
  }
};

#endif

/*
  Things in this header file:
  Adding public methods that access private class attributes:
  - Give the following Dog class in Dog.h add the following public getter and
    setter methods that get and set each class attribute as follows:

    - get_name returns the name of attr of the dog
    - set_name sets the name attr of the dog to the string that is passed in to
      the method
    - get_age returns the age of the dog
    - set_age sets the age attr of the dog to the int passed in to the method
  
  Add more public methods to an existing class:
  - Given an existing Dog class in Dog.h, add the following public method to the
    class:
    - get_human_years() return the dogs age * 7
    - speak() returns the string "Woof"
  
*/ 