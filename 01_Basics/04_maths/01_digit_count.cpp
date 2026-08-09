#include <iostream> 

using namespace std;

int number(int n){
    int count = 0;

    if(n == 0){
        return 1;
    }
    while(n != 0){
        count += 1;
        n = n/10;
    }
    return count;
 
}

int main() {
    int n;
    cin>>n;
    cout<<number(n);

    return 0;
}