#include <iostream>
#include <string>
#include "Movie.h"
int Movie::movie_count { 0 };

// Constructor
Movie::Movie( string name_val, string rating_val, int watch_val ) 
  : name { name_val }, movie_rating { rating_val }, watch_count { watch_val } {
  ++movie_count;
}

// Destructor
Movie::~Movie(){
  --movie_count;
}

int Movie::get_movie_count(){
  return movie_count;
}

string Movie::get_movie_name() const {
  return name;
}

string Movie::get_movie_rating(){
  return movie_rating;
}

void Movie::increment_watched(){
  ++watch_count;
}

void Movie::display() const {
  cout 
    << "Name: " 
    << name 
    << ", Rating: " 
    << movie_rating 
    << ", Watch count: " 
    << watch_count 
    << 
  endl;
}