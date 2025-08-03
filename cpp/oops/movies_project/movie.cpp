#include <iostream>
#include <string>
#include "movie.h"
using namespace std;

movie::movie()
    : movie("None", 0, 0){}

movie::movie(string a, int b, int c)
    : movie_name (a), age_rating (b), times_watched (c){
       // cout<<movie_name<<" has be added"<<endl;
    }

movie::~movie(){
   // cout<<movie_name<<" has be deleted"<<endl;
}