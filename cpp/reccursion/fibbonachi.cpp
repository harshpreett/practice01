#include <iostream>
using namespace std;

void fibonacci(int n , int a1  = 0, int a2 = 1,bool once = false){
    if (!once) cout<<a1<<" "<<a2<<" ";
    if (n == 0) return;
    cout<<a1+a2<<" ";
    return fibonacci(n-1,a2,a1+a2,true);
}

int main(){
    fibonacci(15);
    return 0;
}