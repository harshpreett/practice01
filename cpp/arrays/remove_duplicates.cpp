#include <iostream>
#include <climits>
#include <algorithm>
using namespace std;
void swap(int index_1, int index_2, int arr[]){
    int temp = arr[index_1];
    arr[index_1] = arr[index_2];
    arr[index_2] = temp;
}
void remove_duplicates(int size, int arr[]){
    for (int i = 1; i < size; i++){
        if(arr[i-1] == arr[i]){
            arr[i] = INT_MAX;
        }
    }
    for (int i = size-1; i > 0; i--){
        for (int j = 0; j < i; j++ ){
            if (arr[j] > arr[j+1]){
                swap(j,j+1,arr);
            }
        }
    }
}

int main(){
    int size = 5;
    int arr[size] = {1,2,4,4,8};
    remove_duplicates(size, arr);
    for( int i = 0; i < size; i++){
        cout<<arr[i]<<" ";
    }

}