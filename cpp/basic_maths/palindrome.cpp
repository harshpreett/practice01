#include <iostream>
#include <cmath>
using namespace std;
int revnum(int);
int digits(int);

int main(){
    int num1 {123321};
    cout<<"The numbr is: "<<num1<< endl;
    cout<<"Its opposite is"<<  revnum(num1)<<endl;
    if (num1 == revnum(num1))
        cout<<"Yes it is plaindrome"<<endl;
    else
        cout<<"Its not"<<endl;

    return 0;
}

int revnum(int a){
    if(a == 0)
        return 0;
    int k = a % 10;
    a= a / 10;
    return k * pow(10,digits(a)) + revnum(a);

}

int digits(int num){
    int digits{0};
    for(int i {0};num != 0;i++){
        num = ((num- (num%10)) / 10) ;
        digits++;
    }
    return digits;
}