#include <iostream>
using namespace std;

void swap_min_max(int size, int arr[]);

int main(){
    int size = 5;
    int arr[size] = {1,2,3,4,5};
    swap_min_max(size, arr);
    for(int i = 0; i < size; i++){
        cout<<arr[i]<<" ";
    };
    return 0;
}

void swap_min_max(int size, int arr[]){
    int min = INT8_MAX;int min_index;
    int max = INT8_MIN;int max_index;
    for (int i = 0; i < size; i++){
        if (arr[i] < min){
            min = arr[i];
            min_index = i;
        };
        if (arr[i] > max){
            max = arr[i];
            max_index = i;
        };
    };
    swap(arr[min_index],arr[max_index]);
}