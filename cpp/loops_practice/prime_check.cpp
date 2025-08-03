#include <iostream>
using namespace std;

int main(){

    int num{0},toggle{0};
    cout<<"Enter the Number : ";cin>>num;cout<<endl;
    for (int i {2};i < num; i++){
        if (num%i == 0){
            toggle = 0;break;
        }
        else
            toggle = 1;

    }
    cout<<toggle<<endl;
// toogle 1 means prime


    return 0;
}