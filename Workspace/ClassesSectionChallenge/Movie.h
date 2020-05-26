#ifndef MOVIE_H
#define MOVIE_H
#include <string>

using namespace std;

class Movie
{
private:
    string name;
    string rating;
    int watchCount;
    
public:
    Movie(string name, string rating, int watchCount);
    
    string getMovieName();
    string getMovieRating();
    int getWatchCount();
    void incrementWatchCount();
    void displayMovieDetails();
};

#endif // MOVIE_H
