#include <iostream>
using namespace std;
int main(){

    const float price_for_small {25};
    const float price_for_big {35};
    const float sales_tax {0.06};
    const int estimate_time {30}; //dayy

    int number_big {0};
    int number_small {0};
    float total {0};

    cout << "Welcome to Harsh Cleaning service\n\n" <<endl;
    cout << "Number of Big rooms to be Cleaned : "<<endl;
    cin >> number_big;
    cout << "Number of Small rooms to be Cleaned : "<<endl;
    cin >> number_small;
    cout << "\n---------------------------\nYour Estimate is:"<<endl;
    cout << "Number of Small rooms to be Cleaned : "<<number_small<<endl;
    cout << "Number of Big rooms to be Cleaned : "<<number_big<<endl;
    cout << "Price for small room : "<<price_for_small<<endl;
    cout << "Price for big room : "<<price_for_big<<endl;
    total = price_for_big*number_big + price_for_small * number_small;
    cout << "Total Cost : "<<total<<endl;

    cout << "Tax total at "<< sales_tax <<" is : "<< sales_tax * total <<endl;
    cout << "Your net total is : " << total + total * sales_tax<<endl;
    cout << "This is estimate is valid for : " << estimate_time << "days"<<endl;


    
    




}
