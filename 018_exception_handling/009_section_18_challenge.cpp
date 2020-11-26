/*
  Exception Handling - Section 18 Challenge

    - For this challenge we want to integrate our own user-defined exception
      classes into the Account class hierarchy
    - The account classes are provided for you
    - also, the IllegalBalanceException.h file contains the declaration for the
      IllegalBalanceException class
    
    - What I would like you to do is:
      1. Derive IllegalBalanceException from std::exception and implement the
         what() method to provide an exception message. This exception object
         should be thrown from the Account class constructor in an account
         object where the object is created with a negative balance.

      2. Derive Insufficient
*/