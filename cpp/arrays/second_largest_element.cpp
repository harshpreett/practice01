#include <iostream>
#include <climits>
using namespace std;

int second_largest_smallest(int size, int arr[]){
    int num_large = INT_MIN;int second_large = INT_MIN;
    int num_small = INT_MAX;int second_small = INT_MAX;
    for (int i = 0; i < size; i++){
        if (num_large < arr[i]){
            second_large = num_large;num_large = arr[i];
        }
        else if(second_large < arr[i] && arr[i] != num_large){
            second_large = arr[i];
        }
        if (num_small > arr[i]){
            second_small = num_small;num_small = arr[i];
        }
        else if(second_small > arr[i] && arr[i] != num_small){
            second_small = arr[i];
        }
        
    }
    cout<<"Largest and second largest are : "<<num_large<<" "<<second_large<<endl;
    cout<<"smallest and second smallest are : "<<num_small<<" "<<second_small<<endl;   
}

int main(){
    int size = 10;
    int arr[size] = {1,8,46,9,7,7,9,86,-89,0};
    
    second_largest_smallest(size, arr);

    return 0;
}