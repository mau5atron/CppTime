#ifndef ILLEGAL_BALANCE_EXCEPTION_H
#define ILLEGAL_BALANCE_EXCEPTION_H

#include <exception>

typedef struct IllegalBalanceException: public std::exception {
public:
  IllegalBalanceException() noexcept = default;
  ~IllegalBalanceException() = default;

  virtual const char *what() const noexcept {
    return "Illegal Balance Exception";
  }
} IllegalBalanceException;

#endif //  ILLEGAL_BALANCE_EXCEPTION_H