#include <iostream>
#include <algorithm> 

using namespace std;

int main() {
    int n;
    cin>>n;
    int size = 2*n-1;
    for(int i=0;i<size;i++){
        for(int j=0;j<size;j++){
            int top = i;
            int bottom = size -i-1;
            int left = j;
            int right = size - j-1;

            int min = std::min({top,bottom,left,right});

            cout<<n-min<< " ";

        }
        cout<<endl;
    }
    return 0;
}