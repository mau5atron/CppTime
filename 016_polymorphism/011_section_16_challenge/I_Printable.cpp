#include "headers/I_Printable.h"

friend std::ostream &operator<<( std::ostream &os, const I_Printable &obj ){
  obj.print( os );
  return os;
}