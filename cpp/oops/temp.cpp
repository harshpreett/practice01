#include <iostream>
using namespace std;

class hello
{
public:
    int sid;
    int age;
    hello(int a, int b):sid(a),age(b){}


};

int main(){
    int nums[]{100,56,84,97};

    int *ptr {nums};

    cout<<ptr[2]<<endl;
    cout<<*ptr++<<endl;
}