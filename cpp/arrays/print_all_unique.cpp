#include <iostream>
using namespace std;

void print_unique(int size, int arr[]){
    for(int i = 0; i < size; i++){
        bool is_present = false;
        for(int j = 0 ; j < i; j++){
            if (arr[j] == arr[i]){
                is_present = true;
                break;
            }
            else{is_present = false;}
        }
        if (is_present == false){
            cout<< arr[i]<<" ";
        }
    }
}

int main(){
    int size = 10;
    int arr[size] = {1,2,1,3,5,9,7,7,6,8};
    print_unique(size, arr);
    return 0;
}

