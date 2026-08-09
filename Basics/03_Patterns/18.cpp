#include <iostream> 

using namespace std;

int main() {
    int n;
    cin>>n;
    int x = 64 + n; 
    for(int i=0;i<n;i++){
        int z = x - i;  
        for(int j=0;j<i+1;j++){
            char y = (char)z;
            cout<<y;
            z = z + 1;
        }
        cout<<endl;
    }
    return 0;
}