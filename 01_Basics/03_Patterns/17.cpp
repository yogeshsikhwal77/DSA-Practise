#include <iostream> 

using namespace std;

int main() {
    int n;
    cin>>n;
    
    for(int i=0;i<n;i++){
        int x = 65;
        for(int j=0;j<n;j++){
            if(j>n-i-2){
                char y = (char)x;
                cout<<y;
                x = x+1;
            }else{
                cout<<" ";
            }
        }

        int a = 64+i;

        for(int j=1;j<n;j++){
            if(j<i+1){
                char b = (char)a;
                cout<<b;
                a = a- 1;
            }else{
                cout<<" ";
            }
        }


        cout<<"\n";
    }

    return 0;
}