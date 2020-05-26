#include <iostream>
#include <string>
#include "Movie.h"

using namespace std;

Movie::Movie(string name, string rating, int watchCount) : name{name}, rating{rating}, watchCount{watchCount} {
    
}

string Movie::getMovieName() { 
    return name;
}

string Movie::getMovieRating() {
    return rating;
}
    
int Movie::getWatchCount() {
    return watchCount;
}
    
void Movie::incrementWatchCount() {
    ++watchCount;
}

void Movie::displayMovieDetails() {
    cout << "-------------------- Movie Details --------------------" << endl;
    cout << "Name                : " << getMovieName() << endl;
    cout << "Rating              : " << getMovieRating() << endl;
    cout << "No of Times Watched : " << getWatchCount() << endl;
    cout << "-------------------------------------------------------" << endl << endl;
}