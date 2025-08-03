#include <iostream>
using namespace std;

bool is_sorted(int size, int arr[]){
    if (size <= 1)
        return true;
    for (int i = 1; i < size; i++){
        if (arr[i-1] > arr[i])
            return false;
    }
    return true;
}

int main(){
    cout<<boolalpha;
    int size = 10;
    int arr[size] = {2,5,6,7,13,15,18,19,78,100};
    cout<<is_sorted(size, arr)<<endl;
}