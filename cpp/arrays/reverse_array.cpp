#include <iostream>
using namespace std;

void reverse_array(int size, int array[]){
    int start = 0; int end = size - 1;
    for( ; start < end ; start++, end--){
        swap(array[start], array[end]);
    };
}

int main(){
    int size = 5;
    int arr[size] = {1,2,3,4,5};
    for(int i = 0; i < size; i++){
        cout<<arr[i]<<" ";
    };
    reverse_array(size, arr);
    cout << "New array: "<< endl;
    for(int i = 0; i < size; i++){
        cout<<arr[i]<<" ";
    };

}
