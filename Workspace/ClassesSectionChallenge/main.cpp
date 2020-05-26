#include <iostream>
#include <string>
#include "Movie.h"
#include "Movies.h"

using namespace std;

int main() {
    
    Movie petta{"Petta", "G", 1};
    Movie pudhupettai{"Pudhupettai", "PG-13", 1};
    Movie wrongTurn{"Wrong Turn", "R", 1};
    Movie dontBreathe{"Dont Breathe", "PG-13", 1};
    
    Movies movies;
    movies.addMovie(petta);
    movies.addMovie(pudhupettai);
    movies.addMovie(wrongTurn);
    movies.addMovie(dontBreathe);
    movies.addMovie(dontBreathe);
    
    movies.displayAllMovies();

    movies.incrementWatchCount("Petta");
    movies.incrementWatchCount("Pudhupettai");
    movies.incrementWatchCount("Three");

    movies.displayAllMovies();
    
    return 0;
}