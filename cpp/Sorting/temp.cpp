#include <iostream>
using namespace std;

int main(){
    int var = 10;
    int *ptr = &var;
    cout<<"Value of var: "<< var<<endl;
    cout<<"Location of var is: "<< &var<<endl;
    cout<<"Value of ptr is: "<<ptr<<endl;
    cout<<"Location of ptr is: "<< &ptr<<endl;
}