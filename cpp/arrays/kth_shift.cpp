#include <iostream>
using namespace std;

void shift(int size, int arr[], int k, char shift){
    if (shift == 'l'){
        for(int end1{0},end2{k-1}; end1 < end2; end1++, end2--){
            swap(arr[end1],arr[end2]);
        }
        for(int end1{k},end2{size - 1}; end1 < end2; end1++, end2--){
            swap(arr[end1],arr[end2]);
        }
        for(int end1{0},end2{size - 1}; end1 < end2; end1++, end2--){
            swap(arr[end1],arr[end2]);
        }
    }else{
        for(int end1{0},end2{size - k - 1}; end1 < end2; end1++, end2--){
            swap(arr[end1],arr[end2]);
        }
        for(int end1{size - k },end2{size - 1}; end1 < end2; end1++, end2--){
            swap(arr[end1],arr[end2]);
        }
        for(int end1{0},end2{size - 1}; end1 < end2; end1++, end2--){
            swap(arr[end1],arr[end2]);
        }
    }
}

int main(){
    int size = 10;
    int arr[size] = {1,2,3,4,5,6,7,8,9,10};

    shift(size, arr, 3, 'r');

    for(int x : arr){
        cout<< x << " ";
    }
    return 0;
}