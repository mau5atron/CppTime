/*
  STL - What is the STL?

    - A library of powerful, reusable, adaptable, generic classes and functions
    - Implemented using C++ templates
    - Implements common data structures and algorithms
    - Huge class library
    - Alexander Stepanov (1994)
*/

/*
  Why use the STL?

    - Assortment of commonly used containers
    - Known time and size complexity
    - Tried and tested - Reusability
    - Consistent, fast, and type-safe
    - Extensible
*/

/*
  Elements of the STL

    - Containers
      - Collections of objects or primitive types ( array, vector, deque, stack,
        set, map, etc. )
    - Algorithms
      - Functions for processing sequences of elements from containers (find,
        max, count, accumalate, sort, etc.. )
    - Iterators
      - Generate sequences of element from containers (forward, reverse, by
        value, by reference, contant, etc.. )
*/

/*
  A simple example

    {
      #include <vector>
      #include <algorithm>

      std::vector<int> v { 1, 5, 3 };
    }

  Sorting a vector

    {
      std::sort( v.begin(), v.end() );

      for ( auto elem : v ){
        std::cout << elem << "\n";
      }

      // prints
      // 1
      // 2
      // 3
    }
*/

/*
  Reversing a vector

    {
      std::reverse( v.begin(), v.end() );


      for ( auto elem : v ){
        std::cout << elem << "\n";
      }

      // 5
      // 3
      // 1
    }
*/

/*
  Accumalate - add values together

    {
      int sum {};

      sum = std::accumalate( v.begin(), v.end(), 0 ); // 0 is what the running sum will start at
      // for doubles, should use 0.0
      std::cout << sum << "\n";

      // prints 9 // 1 + 3 + 5
    }
*/

/*
  Types of Containers

    - Sequence containers
      - array, vector, list, forward_list, deque
    - Associative containers
      - set, multi set, map, multi map
    - Container adapters
      - stack, queue, priority queue
*/

/*
  Types of Iterators

    - Input iterators
      - From the container to the program
    - Output iterators
      - from the program to the container
    - Forward iterators
      - Navigate one item ata time in one direction
    - Bi-directional iterators
      - Navigate one item at a time both directions
    - Random access iterators
      - directly access a container item
*/

/*
  Types of Algorithms
    - About 60 algorithms in the STL
    - Non-modifying
    - Modifying    
*/
