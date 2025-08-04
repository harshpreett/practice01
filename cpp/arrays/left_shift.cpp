#include <iostream>
using namespace std;

void left_shift(int size, int arr[]){
    int temp = arr[0];
    for (int i = 0; i < size - 1; i++)
        arr[i] = arr [i+1];
    arr[size-1] = temp;
}

int main(){
    int size = 10;
    int arr[] = {1,2,3,4,5,6,7,8,9,10};

    left_shift(size,arr);
    
    for (int x : arr)
        cout<< x << " ";   
}