#include <iostream>
using namespace std;

int rotate_left_by_index(int start, int end, int arr[],int size,int times){
    if(start > size - 1 || end > size - 1)
        return -1;
    for(int end1{start + times}, end2{end}; end2 > end1; end1++, end2--)
        swap(arr[end1],arr[end2]);//flips just after zeros
    for(int end1{start}, end2{end}; end2 > end1; end1++, end2--)
        swap(arr[end1],arr[end2]);//flips all the selection
    return 0;
}

int main(){
    int size = 10;
    int arr[size] = {1,0,3,0,4,5,6,7,0,40};
    rotate_left_by_index(2, 6,arr,10,2);
    for(int k : arr){
        cout << k << " ";
    }
}
