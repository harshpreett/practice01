#include <iostream>
using namespace std;

void print_intersection(int size_1, int size_2, int arr_1[], int arr_2[]){

    for(int i = 0; i < size_1; i++){
        bool printed_once = false;
        for(int j = 0; j < i; j++){
            if (arr_1[i] == arr_1[j]){
                printed_once = true;
            }
        }

        for(int j = 0; j < size_2; j++){
            if (arr_1[i] == arr_2[j] && printed_once == false){
                cout<<arr_2[j]<< " ";
            }
        }
    }
    cout<<endl;
}

int main(){
    int size_1 = 10;
    int size_2 = 10;
    int arr_1[size_1] = {1, 3, 5, 9, 9, 11, 13, 15, 17, 19};
    int arr_2[size_2] = {0, 2, 3, 7, 9, 12, 15, 18, 19, 21};
    print_intersection(size_1, size_2, arr_1, arr_2);
}