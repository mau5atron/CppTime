/*
  The Standard Template Library - Generic Programming with class Templates

    - What is a C++ Class template?

      - Similar to a function template, but at the class level
      - Allows plugging-in any data type
      - Compiler generates the appropriate class from the blueprint
*/

/*
  - Let's say wee want a class to hold items where the item has a name and an
    integer
  
    {
      class Item {
        private:
          std::string name;
          int value;
        public:
          Item( std::string name, int value ) : name { name }, value { value }{}
          std::string get_name() const {
            return name;
          }

          int get_value() const {
            return value;
          }
      };
    }
*/

/*
  - But we'd like our Item class to be able to hold any type of data in addition
    to the string
  - We can't overload class names
  - We don't want to use dynamic polymorphism
*/

/*
  Generic Programming with class templates

    {
      // need to tell compiler this is a template class
      template <typename T>
      class Item {
        private:
          std::string name;
          T value;
        public:
          Item( std::string name, T value ) : name { name }, value { value }{}
          std::string get_name() const {
            return name;
          }

          T get_value() const {
            return value;
          }
      };
    }
*/

/*
  - Creating instances of Item with different data types for value

    {

      Item<int> item1 {"Larry", 1};
      Item<double> item2 {"House", 1000.0};
      Item<std::string> item3 {"Frank", "Boss"};
      std::vector< Item<int> > vec;
    }
*/

/*
  Multiple types as template parameters
    - We can have multiple parameters
    - An their types can be different

    template <typename T1, typename T2>
    struct My_Pair {
      T1 first;
      T2 second;
    };

    
*/
