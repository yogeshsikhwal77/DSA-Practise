#include <iostream> 
#include <vector>

using namespace std;

void bubble_sort(vector <int>& nums,int n){
    for(int i = 0;i<n-1;i++){
        bool stop = false;
        for(int j=0;j<n-1-i;j++){      //last sorted so need to do less  
            if(nums[j]>nums[j+1]){
                swap(nums.at(j),nums.at(j+1));
                stop = true;
            }
        }
        if(stop == false){
            return;

        }
        
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

    bubble_sort(nums,n);

    for(int i=0;i<n;i++){
        cout<<nums.at(i)<<" ";
    }
    
    return 0;
}