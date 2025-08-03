#include <iostream>
#include <vector>
using namespace std;

int main(){
    bool quit {false};
    char choice {};
    vector <int> vec{};
    int num {};
    while(quit == false){
        cout<<"Welcome to Tempest Calculation Services"<<endl<<"----------------------------------------"<<endl;
        cout<<"Please choose from the following options : \n\n1. P - Print Numbers\n2. A - Add a Number\n3. M - Print Mean\n";
        cout<<"4. S - Print Smallest Number\n5. L - Print Largest Number\n6. E - Exit\n";
        cout<<"Your Choice : ";cin>>choice;choice = tolower(choice);int size = vec.size();

        switch(choice){
            case 'p':
                size = vec.size();
                if (size != 0){
                    for(int i {0};i<size;i++){
                    cout<<vec[i]<<" ";
                    }
                }else{cout<<"List has no elements"<<endl;}
                cout<<endl;break;
            case 'a':
                cout<<"Enter the number : ";
                cin>>num;vec.push_back(num);
                size = vec.size();
                cout<< "New List is : ";
                for(int i {0};i<size;i++){
                    cout<<vec[i]<<" ";
                }
                cout<<endl;break;
            case 'e':
                quit = true;break;
            case 'm' :
                double sum{0};
                size = vec.size();
                if (size != 0){
                    for(int i {0};i<size;i++){
                        sum += vec[i];
                    }
                    cout<<"The Mean is : "<<sum/size;
                }else{cout<<"List has no elements"<<endl;}
                cout<<endl;break;
                
        }
    }
}