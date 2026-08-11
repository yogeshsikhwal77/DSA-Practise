#include <iostream> 
#include <vector>

using namespace std;

void selection_sort(vector <int>& nums,int n){

    for(int i=0;i<n-1;i++){
        int smallest = nums.at(i);
        int index = i;
        for(int j = i+1;j<n;j++){
            if(smallest>nums.at(j)){
                smallest = nums.at(j);
                index = j;
            }
        }
        swap(nums.at(i),nums.at(index));
           
    }
}

int main() {
    int n;
    cin>>n;
    vector <int> nums;

    for(int i=0;i<n;i++){
        int temp;
        cin>>temp;
        nums.push_back(temp);
    }
    
    int size = nums.size();
    selection_sort(nums,size);

    for(int i=0;i<size;i++){
        cout<<nums.at(i);
    }
    
    
    return 0;
}