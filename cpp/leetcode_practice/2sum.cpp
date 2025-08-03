#include <iostream>
#include <vector>
using namespace std;

int main(){
    int target{9},m{};
    vector <int> nums{2,7,11,15};

    m = nums.size();
        int v1{},v2{};
        int toggle {false};
        for(int i {0};i<m-1;i++){
            for(int j{i+1};j<m;j++){
                if(nums[i]+nums[j]==target){
                    v1 = i;
                    v2 = j;
                    break;
                }
                    
            }
            

        }
        cout<<"["<<v1<<","<<v2<<"]";







}