#include <iostream> 
#include <vector>

using namespace std;

int largest_element(const vector<int>& nums,int largest){
    for(int num: nums){
        if(num>largest){
            largest=num;
        }
    }

    return largest;
}

int main() {
    vector <int> nums;
    int element;

    while(cin>>element){
        nums.push_back(element);
    }

    if(nums.empty()){
        cout<<"no number entered"<<endl;
        return 1;
    }
    

    cout<<largest_element(nums,nums.at(0));
    
    return 0;
}