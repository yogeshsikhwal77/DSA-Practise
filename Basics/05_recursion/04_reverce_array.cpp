#include <iostream> 
#include <vector>

using namespace std;

void reverce_array(vector<int>& arr,int start,int end){
    if(start >= end){
        return;
    }

    swap(arr[start],arr[end]);

    reverce_array(arr,start+1,end-1);

}

int main() {
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }

    reverce_array(arr,0,arr.size()-1);

    for(int i =0;i<n;i++){
        cout<<arr.at(i)<<" ";
    }

    return 0;
}