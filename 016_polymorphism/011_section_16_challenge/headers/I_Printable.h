#ifndef _I_PRINTABLE_H_
#define _I_PRINTABLE_H_
#include <iostream>

class I_Printable
{
  friend std::ostream &operator<<( std::ostream &os, const I_Printable &obj );
public:
  // make this a pure virtual function so that it is overridable, dont implement
  // for I_Printable
  virtual void print( std::ostream &os ) const = 0;
  virtual ~I_Printable() = default;
};

/***************************************************************
 * - Some notes about abstract classes and pure virtual functions
 * 
 * Sometimes implementation of all functions cannot be provided in the base
 * class because we dont know the implementation
 * 
 * Such a class is called an abtract class
 * 
 * For example, let Shape be a base class
 * We cannot provide implementation of function draw() in Shape but we know
 * every derived class must have implementation of draw()
 * 
 * Similarly an Animal class does not have implementation of move() ( assuming
 * that all animals move), but all animals must know how to move
 * We cannot create objects of abstract classes
 * 
 * A pure virtual function ( or abstract function ) in C++ is a virtual function
 * for which we don't have implementation, we only declare it.
 * 
 * A pure virtual function is declared by assigning 0 in declaration
 * 
 * 
 * Some facts
 * 
 * 1. A class is abstract if it has at least one pure virtual function
 * 
 * 2. We can have pointers and references of abstract class type
 * 
 * 3. If we do not override the pure virtual function in derived class, then
 *    dereived class also becomes abstract class
 * 
 * 4. An abstract class can have constructors.
 * 
 * An interface does nmot have implementation of any ofits methods, it can be
 * considered as a collection of method declaractions. In C++, an interface can
 * be simulated by making all methods as pure virtual
 * 
 * In Java, there is a separate key-word for interface.
****************************************************************/

#endif