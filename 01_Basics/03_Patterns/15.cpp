#include <iostream> 

using namespace std;

int main() {
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int x = 65;
        for(int j=0;j<n-i;j++){
            char y = (char)x;
            cout<<y;
            x = x+1;
        }
        cout<<endl;
    }

    
    return 0;
}