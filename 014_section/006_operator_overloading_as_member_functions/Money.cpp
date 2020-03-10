#include "Money.h"

Money::Money() : dollars { 0 }, cents { 0 } {
}

Money::Money( int dollar_val, int cent_val ) 
  : dollars { dollar_val }, cents { cent_val } {
}

bool Money::operator==( const Money &rhs ) const {
  return (this == &rhs);
}

bool Money::operator!=( const Money &rhs ) const {
  return (this != &rhs );
}

