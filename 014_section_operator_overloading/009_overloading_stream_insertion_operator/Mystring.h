#ifndef _MYSTRING_H_
#define _MYSTRING_H_

class Mystring
{
  friend std::ostream &operator<<( std::ostream &os, const Mystring &rhs );
  friend std::istream &operator>>( std::istream &in, Mystring &rhs );

// non-member functions, global functions
  friend bool operator==( const Mystring &lhs, const Mystring &rhs); // overloading equality
  friend Mystring operator-( const Mystring &obj ); // overloading unary minus
  friend Mystring operator+( const Mystring &lhs, const Mystring &rhs ); // string concatenation
private:
  char *str; // pointer to char collection
public:
  Mystring(); // no args constructor
  Mystring( const char *s ); // single args constructor
  Mystring( const Mystring &source ); // Copy construtor
  Mystring( Mystring &&source ); // Move constructor

  ~Mystring(); // Destructor

  Mystring &operator=( const Mystring &rhs ); // copy assignment
  Mystring &operator=( Mystring &&rhs ); // move assignment

  void display() const;

  int get_length() const;
  const char *get_str() const;
  
};

#endif