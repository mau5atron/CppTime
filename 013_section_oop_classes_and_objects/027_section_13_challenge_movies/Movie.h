#ifndef _Movie_H_
#define _Movie_H_

#include <iostream>
#include <string>
using std::string;
using std::cout;
using std::endl;
class Movie 
{
private:
  string name;
  string movie_rating;
  int watch_count;
  static int movie_count;
public:
  static int get_movie_count();
  string get_movie_name() const;
  string get_movie_rating();
  void increment_watched();
  void display() const;
  // Constructor
  Movie(string name_val, string rating_val, int watch_val); // watched is for Movies class

  // Destructor
  ~Movie();
};

#endif