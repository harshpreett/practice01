#include <iostream>
#include <vector>
using namespace std;


int main(){
    vector<int> araay{1,2,3,4,5,6,7,8,9,10,11,12,13};
    for (int i = 0; i < (araay.size())/2; i++){
        swap(araay[i],araay[araay.size()-i-1]);
    }
    for (int c : araay){
        cout << c << " ";  
    }
    cout<<endl;
}
