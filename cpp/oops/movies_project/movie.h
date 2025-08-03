#pragma once
#include <string>
using namespace std;

class movie
{
private:
    
    int age_rating;
    int times_watched = 0;
public:
    string movie_name;
    movie();
    movie(string a, int b, int c);
    ~movie(); // Deconstructor

};