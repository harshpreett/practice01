#include <iostream>
using namespace std;

void sum_prod(int size, int arr[]){
    int prod = 1;
    int sum = 0;
    for(int i = 0; i < size; i++){
        sum += arr[i];
        prod *= arr[i];
        
    };
    cout<<"Sum : "<<sum<<endl;
    cout<<"Product : "<<prod<<endl;
}

int main(){
    int size = 5;
    int arr[size] = {1,2,3,4,0};
    sum_prod(size, arr);
    return 0;
}