#include <iostream>
#include <cmath>
using namespace std;

int total_digits(int num,int dig = 0){
    if (num == 0 && dig == 0) return 1;
    if (num == 0)
        return dig;
    dig++;
    return total_digits(num/10,dig);
}
int sum_of_digits(int num,int power){
    if (num == 0){
        return 0;
    }
    else{
        return pow(num%10,power) + sum_of_digits(num/10,power);
    }
        
}


 bool ams(int num){
    int power = total_digits(num);
    return num == sum_of_digits(num , power);
}
int main(){
    cout<<boolalpha;
    cout<<ams(153)<<endl;
}