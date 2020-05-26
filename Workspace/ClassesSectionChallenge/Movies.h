#ifndef MOVIES_H
#define MOVIES_H

#include <vector>
#include <string>
#include "Movie.h"

using namespace std;

class Movies
{
private:
    vector<Movie> movieList;
    bool hasMovie(string name);
    
public:
    void displayAllMovies();
    void addMovie(Movie movie);
    void incrementWatchCount(string movieName);
};

#endif // MOVIES_H
