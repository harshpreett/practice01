#include <iostream>
#include <string>
using namespace std;

int main(){
    
    cout<<"Welcome to Harsh Secret Service"<<endl;
    cout<<"-------------------------------\n"<<endl;
    string key{"GfylOmtWzURxsCd2vNeHJKjqT5AMLoaBu6VPkXibcg YwDnZ3798410shErnFQ"};
    string characters{"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz 8520741963"};
    string mes;
    cout<<"Enter the message you want to Encrypt : ";
    getline(cin,mes);


    for(size_t i {0};i< mes.length();i++){
        int k = characters.find(mes.at(i));
        mes.at(i) = key.at(k);
        
    }
    cout<<mes<<endl;

}