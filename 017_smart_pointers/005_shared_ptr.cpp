/*
  Smart Pointers:
    shared_ptr<T>:

    - provides shared ownership of heap objects
    - points to an object of type T on the heap
    - It is not unique - there can be many shared_ptrs pointing to the same
      object on the heap
    - establishes shared ownership relationship
    - CAN be assigned and copied
    - CAN be moved
    - does not support managing arrasys by default
    - when the use count is zero, the managed object on the heap is destroyed
*/

/*
  shared_ptr - creating, initializing and using

    {
      std::shared_ptr<int> p1 { new int {100} };
      std::cout << *p1 << "\n"; // 100
      *p1 = 200;
      std::cout << *p1 << "\n"; // 200

    } // automatically deleted

  shared_ptr - some other useful methods

    {
      // use_count - the number of shared_ptr objects managing the heap object
      std::shared_ptr<int> p1 { new int {100} };
      std::cout << p1.use_count() << "\n"; // 1

      std::shared_ptr<int> p2 { p1 }; // shared ownership

      std::cout << p2.use_count() << "\n"; // 2

      p1.reset(); // decrement the use_count; p1 is nulled out

      std::cout << p1.use_count() << "\n"; // 0
      std::cout << p2.use_count() << "\n"; // 1


    }

  shared_ptr - User defined classes

    {
      std::shared_ptr<Account> p1 { new Account {"Larry"} };
      std::cout << *p1 << "\n"; // display account

      p1->deposit(1000);
      p1->withdraw(500);
    } // automatically deleted
*/

/*
  shared_ptr - vectors and move
  - unlike unique pointers, shared pointers can be copied, assigned, and moved
    {
      std::vector< std::shared_ptr<int> > vec;
      std::shared_ptr<int> ptr { new int {100} };

      vec.push_back( ptr ); // ok, copy is allowed

      std::cout << ptr.use_count() << "\n";
    } // automatically deleted
*/

/*
  shared_ptr - make_shared( c++11 )
    {
      std::shared_ptr<int> p1 = std::make_shared<int>(100); // use_count : 1

      std::shared_ptr<int> p2 = {p1}; // use_count : 2

      std::shared_ptr<int> p3; // use_count : 3

      p3 = p1;
    } // automatically deleted

    - Use make_shared - it's more efficient
    - All 3 pointers point to the SAME object on the heap
    - When the use_count becomes 0, the heap object is deallocated
*/
