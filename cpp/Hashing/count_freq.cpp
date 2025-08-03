#include <iostream>
#include <map>
using namespace std;

int main(){
    int size = 6;
    int arr[] = {10,5,10,15,10,5};
    map <int,int>  mpp;
    for (auto p : arr){
        mpp[p]++;
    }
    for (auto p : mpp){
        cout<<p.first<< " -- "<< p.second<<endl;
    }
}










