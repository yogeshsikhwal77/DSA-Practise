#include <iostream> 
#include <vector>

using namespace std;

int main() {
    int n;
    cin>>n;

    vector<int> arr;
    for(int i =1;i<=n;i++){
        if(n%i==0){
            arr.push_back(i);
        }
    }

    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
    
    return 0;
}