#include <iostream>
using namespace std;

int hcf(int a, int b){
    if (b==0)
        return a;
    return hcf(b , a%b);
}

int main(){
    int a = 12;
    int b = 24;
    cout<<hcf(a,b)<<endl;

    return 0;
}