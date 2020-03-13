#include <iostream>

int main(void)
{
  return 0;
}

/*
  The protected class member modifier:

    class Base
    {
    protected:
      // protected base class members...
    };

    - Accessible from the base class itself
    - Accessible from classes derived from base
    - Not accessible by objects of base or derived

    Example:
    
    class Base
    {
    public:
      int a; // public Base class members
    protected:
      int b;
    private:
      int c;
    };

  
  Access with 'public' inheritance

    - base class
      - public: a
      - protected: b
      - private: c

    - Access in derived class
      - public: a
      - protected: b
      - c : no access

  Access with 'protected' inheritance
    
    - Base class
      - public: a
      - protected: b
      - private: c
    
    - Access in derived class
      - protected: a
      - protected: b
      - c : no access

  Access with 'private' inheritance
    
    - Base class
      - public: a
      - protected: b
      - private: c
    
    - Access in derived class
      - private: a
      - private: b
      - c : no access  
*/