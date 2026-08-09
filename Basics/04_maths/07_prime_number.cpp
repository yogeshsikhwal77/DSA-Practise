#include <iostream> 
#include <cmath>

using namespace std;

void check_prime(int n){
    int count = 0;
    for(int i=1;i<n/2;i++){
        if(n%i==0){
            count = count+1;
        }
    }
    if(count==1){
        cout<<"true";
    }else{
        cout<<"false";
    }

}

int main() {
    int n;
    cin>>n;
    check_prime(n);
    return 0;
}