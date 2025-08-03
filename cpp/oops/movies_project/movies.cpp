#include <iostream>
#include <string>
#include <vector>
#include "movie.h"
#include "movies.h"
#include "movie.cpp"
using namespace std;

void movies::add_movie(string a, int b, int c){
    for (const Movie &movie: movies) {
        if (movie.movie_name() == a)
            return false;
    }
    Movie temp {a, b, c};
    movies.push_back(temp);
    return true;

}


void movies::increment_movie(string){
    
}
void movies::display() const;