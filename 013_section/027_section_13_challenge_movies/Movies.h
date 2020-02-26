#ifndef _Movies_H_
#define _Movies_H_
#include "Movie.h"
#include <vector>
#include <algorithm>
using std::vector;
using std::string;
using std::cout;
using std::endl;
using std::find;

class Movies
{
private:
  std::vector<Movie> my_movies {};
public:
  Movies();
  ~Movies();
  bool add_movie(string movie_name, string movie_rating, int watched_val);
  bool increment_watched(string name);
  void display_movies() const;

};

#endif