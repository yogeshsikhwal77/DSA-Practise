#include <iostream> 

using namespace std;

int main() {
    int d;
    cin>>d;
    int i =0;
    int sum = 0;
    if(d==0){
        d = 10;
    }
    while(i<50){
        sum = sum + (10*i + d);
        i++;
    }
    
    cout<<sum;
    
    return 0;
}