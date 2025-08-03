#include <iostream>
#include <string>
using namespace std;

void string_tower(string str){
    int len = str.size();
    for(int i = 0; i < len; i++){
        for(int j = len - i - 1; j > 0; j--){
            cout<<" ";
        }
        for(int j = 0; j < i+1; j++){
            cout<<str[j];
        }
        for(int j = i -1 ; j >= 0; j--){
            if (i != 0)
                cout<<str[j];
        }
        cout<<endl;
    }
}
int main(){
    string str {};
    cout<<"Please enter String : ";
    cin>> str;

    string_tower(str);
    return 0;
}