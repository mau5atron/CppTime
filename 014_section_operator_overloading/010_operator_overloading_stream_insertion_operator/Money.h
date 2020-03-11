#ifndef _MONEY_H_
#define _MONEY_H_

class Money
{
  friend Money operator+( const Money &lhs, const Money &rhs );
  // stream insertion operator
  friend std::ostream &operator<<( std::ostream &os, const Money &rhs );
private:
  int dollars;
  int cents;
public:
  Money();
  Money( int dollars_val, int cents_val );
  Money( int total );
  int get_dollars() const;
  int get_cents() const;
};

#endif