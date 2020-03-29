#include <iostream>
#include <vector>

class Shape // abstract base class
{
private:
  // attributes
public:
  virtual void draw() = 0; // pure virtual functions
  virtual void rotate() = 0; // pure virtual function
  virtual ~Shape(){}
};

class Open_Shape : public Shape // abstract class
{
public:
  virtual ~Open_Shape(){}
};

class Closed_Shape : public Shape // abstract class
{
public:
  virtual ~Closed_Shape(){}
};

// its a concrete class because we are overriding functions
class Line : public Open_Shape // concrete class
{
public:
  virtual void draw() override {
    std::cout << "Drawing a line" << std::endl;
  }

  virtual void rotate() override {
    std::cout << "Rotating a line" << std::endl;
  }
};

class Circle : public Closed_Shape // concrete class
{
public:
  virtual void draw() override {
    std::cout << "Drawing a circle" << std::endl;
  }
  
  virtual void rotate() override {
    std::cout << "Rotating a circle" << std::endl;
  }

  ~Circle(){}
};

class Square : public Closed_Shape // concrete class
{
public:
  virtual void draw() override {
    std::cout << "Drawing a square" << std::endl;
  }

  virtual void rotate() override {
    std::cout << "Rotating a square" << std::endl;
  }
};

void screen_refresh( std::vector<Shape *> shapes ){
  std::cout << "Refreshing.." << std::endl;

  for( Shape* &ptr_shape : shapes ){
    ptr_shape->draw();
  }
}

int main(void)
{
  // Shape s;
  // Shape *p = new Shape(); throws errors
  // cannot instantiate abstract classes

  // Circle c;
  // c.draw(); statically bound, sometimes we want that, but right now lets
  // focus on dynamic binding

  Shape *ptr = new Circle();
  // dynamic polymorphism will bind at run-time to its overridden class functions
  // ptr->draw();
  // ptr->rotate();
  (*ptr).draw();
  (*ptr).rotate();

  Shape *s1 = new Circle();
  Shape *s2 = new Line();
  Shape *s3 = new Square();

  // vector of base class pointers
  std::vector<Shape *> shapes { s1, s2, s3 };

  // const auto is supposed to work as well? idk
  // for( Shape* &ptr_shape : shapes ){
  //   ptr_shape->draw();
  // }

  screen_refresh( shapes );

  delete s1;
  delete s2;
  delete s3;

  return 0;
}