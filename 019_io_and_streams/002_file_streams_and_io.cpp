/*
  I/O and Streams - File, streams and I/O

    - C++ use streams as an interface between the program and input and output
      devices
    - Independent of the actual device
    - Sequence of bytes
    - Input stream provides data to the program
    - Output stream receives data from the program
*/

/*
  Input/Output Stream example:

    input device -> input_stream(bytes) -> program -> output_stream(data) ->
    output device
*/

/*
  Common header files for stream I/O

    - iostream
      - Provides definitions for formatted input and output from/to streams
    - fstream
      - Provides definitions for formatted input and output from/to file streams
    - iomanip
      - Provides definitions for manipulators used to format stream I/O  
*/

/*
  Commonly used stream classes:

    - ios
      - Provides basic support for formatted and unformatted I/O operations.
        Base class most other classes

    - ifstream
      - Provides for high level input operations on file based streams

    - ofstream
      - Provides for high level output operations on file based streams

    - fstream
      - Provides for high level I/O operations on file based streams. Derived
        from ofstream and ifstream.
    
    - stringstream
      - Provides for high level I/O operations on memory based strings. Derived
        from istringstream nad ostringstream.
*/

/*
  Global Stream Objects

    - cin
      - Standard input stream - by default "connected" to the standard input
        device (keyboard) instance of istream

    - cout
      - Standard ouput stream - by default "connected" to the standard output
        device (console) instance of ostream

    - cerr
      - Standard error stream - by default "connected" to the standard error
        device (console) instance of ostream (unbuffered)

    - clog
      - Standard log stream - by default "connected" to the standard log device
        (console) instance of ostream (unbuffered)
  
  - Global objects - initialized before main executes
  - Best practice is to use cerr for error messages and clog for log messages
 */



