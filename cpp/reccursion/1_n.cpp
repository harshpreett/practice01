#include<iostream>
using namespace std;

void one_to_n(int n,int i = 1){
    if (i == n+1)
        return;
    cout<<i<<" ";
    return one_to_n(n,i+1);
}

int main(){

    one_to_n(23);
}