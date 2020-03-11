#ifndef _MONEY_H_
#define _MONEY_H_

class Money
{
private:
  int dollars;
  int cents;
public:
  Money(); // no args constructor
  Money( int dollars, int cents ); // args constructor
  Money( int total );

  bool operator==( const Money &rhs) const;
  bool operator!=( const Money &rhs) const;
};

#endif