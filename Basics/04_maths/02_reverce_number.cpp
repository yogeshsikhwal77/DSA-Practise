#include <iostream> 

using namespace std;

int main() {
    int n;
    cin>>n;
    int rev = 0;
    while(n!=0){
        int modules = n%10;
        rev = (rev * 10) + modules;
        n = n/10;

    }

    cout<<rev;
    
    return 0;
}