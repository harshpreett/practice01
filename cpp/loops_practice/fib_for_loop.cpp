#include <iostream>
using namespace std;

int main(){
int max{0};
cout<<"Enter Number of Integers : ";cin>>max;cout<<endl;
for(int i {0},i_1{1},i_2{0},fib{0}; i < max-2;i++){

    if (i == 0 )  cout<<i_2<<" "<<i_1<<" ";

    fib =i_2 + i_1;

    cout<<fib<<" ";

    i_2 = i_1;i_1 = fib;
    
}
    

return 0;
}