#include <iostream>

void swap(int index_1, int index_2, int arr[]){
    int temp = arr[index_1];
    arr[index_1] = arr[index_2];
    arr[index_2] = temp;
}
void selection_sort(int size, int arr[]){
    for (int i = 0; i < size; i++){
        int index_smallest = i;
        for (int j = i; j < size; j++){
            if (arr[j] < arr[index_smallest]){
                index_smallest = j;
            }
        }
        swap(i,index_smallest,arr);
    }
}
void bubble_sort(int size, int arr[]){
    for (int i = size-1; i > 0; i--){
        for (int j = 0; j < i; j++ ){
            if (arr[j] > arr[j+1]){
                swap(j,j+1,arr);
            }
        }
    }
}
void printarr(int size, int arr[]){
    for (int i = 0; i < size; i++){
        std::cout<<arr[i]<<" ";
    }
}
void insertion_sort(int size, int arr[]){
    for(int i = 1; i < size; i++){
        for(int j = i; j != 0; j--){
            if(arr[j]<arr[j-1]){
                swap(j,j-1,arr);
            }
        }
    }
}

int main(){
    int size = 10;
    int arr[size] = {4,5,9,3,1,0,11,7,9,14};
    insertion_sort(size, arr);
    printarr(size,arr);
}