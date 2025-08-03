#include <iostream>
using namespace std;

int main(){

    int num{0},toggle{1};
    cout<<"Enter the Number : ";cin>>num;cout<<endl;
    for(int j {1}; j <= num ; j++){
        for (int i {2};i < j; i++){
        if (j%i == 0){
            toggle = 0;break;
        }
        else
            toggle = 1;

    }
    if(toggle == 1)
        cout<<j<<" ";
    else
        ;
    
        
    }
 

    return 0;
}