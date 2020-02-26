#include <iostream>
#include "Movie.h"
#include "Movies.h"
#include <iostream>
#include <string>
#include <vector>
using std::cout;
using std::endl;
using std::vector;

// Function prototypes
// void increment_watched(Movies &movies, std::string name);
// void add_movie(Movies &movies, std::string name, std::string rating, int watched);

/******************************************************************************
 * Helper function
 * increment_watched expects a reference to a Movies object
 * and the name of the movie to increment the watched count
 * 
 * if the watched count was incremented successfully it 
 * displays a success message 
 * otherwise the watched count could not be incremented
 * because the name of the movie was not found
*******************************************************************************/ 

// void increment_watched(Movies &movies, std::string name){
//   if( movies.increment_watched(name) ){
//     std::cout << name << " watched incremented" << std::endl;
//   } else {
//     std::cout << name << " not found" << std::endl;
//   }
// }

/*****************************************************************************
 * Helper function
 * add_movie expects a reference to a Movies object
 * and the movie, the rating and the watched count
 * 
 * if the movie was successfully added to the movies object it
 * displays a success message 
 * otherwise the movie was not added 
 * because the name of the movie was already in movies
 *****************************************************************************/ 

// void add_movie(Movies &movies, std::string name, std::string rating, int watched){
//   if( movies.add_movie(name, rating, watched) ){
//     std::cout << name << " added " << std::endl;
//   } else {
//     std::cout << name << " already exists" << std::endl;
//   }
// }

int main(void)
{
  Movies movies;
  // need to build a menu for this
  movies.add_movie("Lion King", "PG", 3);
  movies.display_movies();
  movies.add_movie("Big", "PG-13", 2);
  movies.add_movie("Star Wars", "PG-13", 5);
  // add_movie( my_movies, "Big", "PG-13", 2); // ok
  // add_movie( my_movies, "Star Wars", "PG-13", 5); // ok
  // add_movie( my_movies, "Cinderella", "PG", 7); // ok

  // my_movies.display(); // Big, Star Wars, Cinderella
  // add_movie( my_movies, "Cinderella", "PG", 7); // already exists
  // add_movie(my_movies, "Ice Age", "PG", 12); // OK
  // my_movies.display(); // Big, Star Wars, Cinderella, Ice Age
  // increment_watched(my_movies, "Big"); // Ok
  // increment_watched(my_movies, "Ice Age"); // Ok
  // my_movies.display(); // Big and Ice Age watched count incremented by 1
  // increment_watched(my_movies, "XXX"); // XXX not found

  return 0;
}