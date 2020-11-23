/*
  Smart Pointers Section Overview
  - Issues with raw pointers
  - What are smart pointers?
  - Concept of ownership and RAII ( Resource Acquisition Is Initialization )
  - C++ Smart Pointers
    - unique pointers ( unique_ptr )
      - unique pointer to heap storage, that is not shared, and the ownership is
        clear
      - when you know who owns the pointer, then you know who needs to delete
        the pointer, or at least c++ knows
    - Shared pointers ( shared_ptr )
      - pointers that share common heap storage and can be useful
    - Weak pointers ( weak_ptr )
      - and how they can help us avoid a problem associated shared pointers
  - Custom deleters ( we want to write code that has no "news" and no "deletes"
    )
    - be able to call a specific version of delete
*/