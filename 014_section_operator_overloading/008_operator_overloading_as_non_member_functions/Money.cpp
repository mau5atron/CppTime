#include <iostream>
#include "Money.h"

Money::Money( int dollars_val, int cents_val ) 
  : dollars { dollars_val }, cents { cents_val }{
}

Money::Money() : dollars { 0 }, cents { 0 }{
}

Money::Money( int total ) : dollars { total / 100 }, cents { total % 100 }{
}

int Money::get_dollars() const {
  return dollars;
}

int Money::get_cents() const {
  return cents;
}

Money operator+( const Money &lhs, const Money &rhs ){
  int total = (lhs.dollars + rhs.dollars) * 100;
  total += lhs.cents + rhs.cents;
  return Money { total }; // lol needed the constructor with single total for this to work
}