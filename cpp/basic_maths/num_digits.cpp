#include <iostream>
using namespace std;

int main(){
    cout<<"What is the number"<<endl;
    int num;
    int digits{0};
    cin>>num;
    for(int i {0};num != 0;i++){
        num = ((num- (num%10)) / 10) ;
        digits++;
    }
    cout<<"The digits are : "<< digits<<endl;
    cout<<"The num is : "<< num<<endl;

    return 0;
}