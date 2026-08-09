#include <iostream> 

using namespace std;

int main() {
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int x = 1;
        for(int j=0;j<n;j++){          
            if(j<i+1){
                cout<<x;
                x += 1;            
            }else{
                cout<<" ";
            }
        }
        int y = i+1;
        for(int j=0;j<n;j++){
            
            if(j>=n-i-1){
                cout<<y;
                y = y -  1;
            }else{
                cout<<" ";
            }
        }

        cout<<"\n";
    }


    return 0;
}