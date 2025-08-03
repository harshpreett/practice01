#include <iostream>
using namespace std;
int main(){

    int max {0};
    cout<<"Enter the Floors : ";cin >> max ;cout<<endl;

    for (int i {2},j{0};j < max;j++){
       for(int k {0};k <= j; k++) {
        
        
        cout<<i<<" ";
        
        i++;
       }
       cout<<endl;
    }


    return 0;
}