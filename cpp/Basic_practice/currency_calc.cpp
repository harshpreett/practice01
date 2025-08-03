#include <iostream>
using namespace std;

int main(){

    cout << "1 dollar is 100 cents\n1 quater is 25 cents\n1 dime is 10 cents\n1 penny is 1 cent" << endl;
    int rem {0};
    cout << "Enter money for conversion in cents : ";
    cin >> rem;
    cout << "dollars : " << rem / 100 << endl;
    rem %= 100;
    cout << "quaters : " << rem / 25 << endl;
    rem %= 25;
    cout << "dimes : " << rem / 10 << endl;
    rem %= 10;
    cout << "pennys : " << rem / 1 << endl;
    rem %= 1;

}
