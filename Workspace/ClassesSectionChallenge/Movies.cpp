#include <iostream>
#include <string>
#include <vector>
#include "Movies.h"

using namespace std;

void Movies::addMovie(Movie movie) {
    if(hasMovie(movie.getMovieName())) {
        cout << "Movie " << movie.getMovieName() << " already added." << endl;
    } else {
        movieList.push_back(movie);
        cout << "Added Movie: " << movie.getMovieName() << endl;
    }
}

bool Movies::hasMovie(string name) {
    for(Movie movie : movieList) {
        if(movie.getMovieName() == name) {
            return true;
        }
    }
    return false;
}

void Movies::incrementWatchCount(string name) {
    if(hasMovie(name)) {
        for(Movie &movie : movieList) {
            if(movie.getMovieName() == name) {
                movie.incrementWatchCount();
                cout << "Watch Count Updated for Movie: " << movie.getMovieName() << endl;
                return;
            }
        }
    } else {
        cout << "Movie " << name << " does not exist." << endl;
    }
}

void Movies::displayAllMovies() {
    for(Movie movie : movieList) {
        movie.displayMovieDetails();
    }
}