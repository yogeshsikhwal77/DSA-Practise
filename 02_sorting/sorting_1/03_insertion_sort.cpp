#include <iostream> 
#include <vector>

using namespace std;

void insertion_sort(vector <int> nums,int n){
    for(int i=1;i<n;i++){
        int element = nums[i];
        int j =i-1;
        while(j>=0 && nums[j] > element){
            nums[j+1] = nums[j];
            j--;
        }

        

        nums[j+1] = element;
        for(int k=0;k<n;k++){
            cout<<nums[k]<<" ";
        }
        cout<<endl;
    }
}

int main() {
    int n;
    cin>>n;
    vector <int> nums(n);

    for(int i=0;i<n;i++){
        cin>>nums[i];
    }

    insertion_sort(nums,n);
    return 0;
}