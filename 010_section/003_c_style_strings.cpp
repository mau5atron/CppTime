#include <iostream>

int main(void)
{
  return 0;
}

/*
  # Sequence of characters
    - Contiguous in memory 
    - Implemented as an array 
    - Terminated by a null character (null)
      - null : character with a value of zero 
    - Referred to as zero or null terminated strings 

  # String literal
    - sequence of characters in double quotes, e.g. "Frank"
    - constant 
    - terminated with null character

  # How C-Style strings are stored in memory

    "C++ is fun"

    [C][+][+][][i][s][][f][u][n][\0]
    - These characters are stored in a contiguous block of memory that can be 
      accessed as as an array.
    - There is only 10 characters but 11 chracters were allocated into the array

  # Declaring C-Style String variables
    - char my_name[] { "Frank" };
    [F][r][a][n][k][\0] - the \0 is a null character

    my_name[5] = 'y'; // Problem since string needs null character

    ---------------------------------------------------------------

    char my_name[8] {"Frank"};

    [F][r][a][n][k][\0][\0][\0]
    my_name[5] = 'y'; // OK since there are extra null characters

    ---------------------------------------------------------------

    char my_name[8];
    [?][?][?][?][?][?][?][?];
    my_name = "Frank"; // Error
    - Will get a compiler error because that's not the way C-style strings work.
      Array names and literals evaluate to their location in memory so we're
      effectively assigning one location to another, which is illegal.
    - Think of this as saying assign 10 to 12. It does not make sense and the
      compiler will not allow it.

    - In order to assign one string to another we need to use a function called
      string copy that copies the C-style literal to the my_name array.

    - There are lots of C-style functions that C++ brings in from the C
      progamming language.

    strcpy(my_name, "Frank"); // OK

  # #include <cstring> - Functions that work with C-style strings

    - Copying 
    - Concatenation
    - Comparison 
    - Searching 
    - and others
    // They all rely on one common factor that the sequence of characters
       they're working on is terminated with a null character.

    - A few examples 

    char str[80];

    strcpy(str, "Hello "); // copy

    strcat(str, "there "); // concatenate

    cout << strlen(str); // 10

    strcmp(str, " Another "); // -1

  # General purpose functions - #inclide <cstdlib>

    - Includes functions to convert C-style Strings to 
      - integer
      - float
      - long
      - etc.
*/ 