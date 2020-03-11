#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main(void)
{
  string alphabet {"abcdefghijklmnopkrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
  string key {"XZNLWEBGJHQDYVTKFUOMPCIASRxznlwebgjhqdyvtkfuompciasr"};
  string secret_message {};
  string encrypted_message {};
  string decrypted_message {};

  cout << "Enter your message to encrypt \n> ";
  getline(cin, secret_message);

  cout << "Your msg: " << secret_message << endl;

  for ( auto sec_char : secret_message ){
    if(alphabet.find(sec_char) > 52){
      encrypted_message += sec_char;
    } else {
      encrypted_message += key[alphabet.find(sec_char)];
    }
  }

  cout << "Encrypted message: " << encrypted_message << endl;

  for ( auto sec_char : encrypted_message ){
    if(key.find(sec_char) > 52){
      decrypted_message += sec_char;
    } else {
      decrypted_message += alphabet[key.find(sec_char)];
    }
  }

  cout << "Decrypted message: " << decrypted_message << endl;
  return 0;
}

/*
  Section 10 Challenge
  Substitution Cipher

  A simple and very old method of sending secret messages is the substitution
  cipher. You might have used this cipher with your friends when you were a kid.
  
  Basically, each letter of the alphabet gets replaced by another letter of the
  alphabet. For example, every 'a' gets replaced with an 'X' and every 'b' gets
  replaced with a 'Z', etc.

  Write a program that asks a user to enter a secret message.

  Encrypt this message using the substitution cipher and display the encrypted
  message. Then decrypt the encrypted message back to the original message.

  You may use the 2 strings below for your substitution. For example, to encrypt
  you can replace the character at position n in alphabet with the character at
  position n in key.

  To decrypt you can replace the character at position n in key with the
  character at position n in the alphabet.



  Have fun! And make the cipher stronger if you wish!
  Currently the cipher only substitutes letters - you could easily add digits,
  punctuation, whitespace and so forth. Also, currently, the cipher always
  substitutes a lowercase letter with an uppercase letter and vice-versa. This
  could also be improved.

  Remember, the less code you write is less code you have to test! 
  Reuse existing functionality in libraries and in the std::string class!
*/ 