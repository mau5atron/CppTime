#ifndef INSUFFICIENT_FUNDS_EXCEPTION_H
#define INSUFFICIENT_FUNDS_EXCEPTION_H

typedef struct InsufficientFundsException {
public:
  InsufficientFundsException() noexcept = default;
  ~InsufficientFundsException() = default;

  virtual const char *what() const noexcept {
    return "Insufficient funds exception";
  }
} InsufficientFundsException;

#endif // !INSUFFICIENT_FUNDS_EXCEPTION_H