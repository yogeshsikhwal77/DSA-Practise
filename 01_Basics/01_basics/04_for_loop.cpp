#include <iostream> 

using namespace std;

int main() {
    int x,y;
    cin>>x;
    cin>>y;
    int sum =0;
    for(int i = x;i<=y;i++){
        sum = sum + i;
    }
    cout<<sum;

    
    return 0;
}