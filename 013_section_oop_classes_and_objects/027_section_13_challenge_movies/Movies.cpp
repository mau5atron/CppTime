// #include "Movie.h"
#include "Movies.h"

Movies::Movies(){
}

Movies::~Movies(){
}

bool Movies::add_movie(string movie_name, string movie_rating, int watched_val){
  // added const and reference instead of copying object
  for( const Movie &movie_el : my_movies ){
    if( movie_el.get_movie_name() == movie_name ){
      return false;
    }
  }

  Movie temp { movie_name, movie_rating, watched_val };
  my_movies.push_back(temp);
  return true;
}

bool Movies::increment_watched(string name){
  for( Movie &movie_el : my_movies ){
    if( movie_el.get_movie_name() == name ){
      movie_el.increment_watched();
      return true;
    }
  }
  return false;
}

void Movies::display_movies() const {
  if(my_movies.size() == 0){
    cout << "No movies to display." << endl;
  } else {
    for( const Movie &vec_movie : my_movies ){
      vec_movie.display();
    }
  }
}