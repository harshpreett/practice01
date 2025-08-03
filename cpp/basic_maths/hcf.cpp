#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int hcf(int num1 , int num2){
    vector <int> factors_num1;
    vector <int> factors_num2;
    int hcf{1};
    for (int i {2}; i != num1;i++){
        if (num1 % i == 0)
            factors_num1.push_back(i);
    }
    factors_num1.push_back(num1);
    for (int i {2}; i != num2;i++){
        if (num2 % i == 0)
            factors_num2.push_back(i);
    }
    factors_num2.push_back(num2);
    for (auto k  : factors_num1){
        cout<<k<<" ";
    }
    cout<<endl;
    for (auto k  : factors_num2){
        cout<<k<<" ";
    }
    cout<<endl;

    if (factors_num1.size() < factors_num2.size())
        swap(factors_num1,factors_num2);
    for(auto c : factors_num1){
        for (auto k  : factors_num2){
            if(c==k)
                hcf = k;
        }
    }
    return hcf;
}

int main(){

    cout<<hcf(46,23)<<endl;

    return 0;
}