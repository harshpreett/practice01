#include <iostream>
#include <string>
using namespace std;

bool check_palindrome(string str){
   for(int i = 0 ; i < str.size()/2 ; i++ ){
        if(str[i] != str[str.size()-i-1])
            return false;
   }
   return true;
}

int main(){
    cout<<boolalpha;
    cout<<check_palindrome("drtyhn")<<endl;
}