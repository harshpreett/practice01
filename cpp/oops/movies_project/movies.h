#pragma once
#include <string>
#include <vector>
#include "movie.h"
using namespace std;

class movies
{
private:
    vector <movie> collection;

public:
    void add_movie(string,int,int);
    void increment_movie(string);
    void display() const;
};