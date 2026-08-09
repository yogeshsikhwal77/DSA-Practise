#include <iostream> 
#include <algorithm>

using namespace std;

int main() {
    int n,m;
    cin>>n>>m;
    // int min = std::min(m,n);
    // int gcd =1;
    // for(int i=1;i<=min;i++){
    //     if(n%i == 0 && m%i == 0){
    //         gcd = i;
    //     }
    // }

    while(m !=0){
        int rem = n%m;
        n = m;
        m = rem;

    }

    cout<<n;
    
    return 0;
}