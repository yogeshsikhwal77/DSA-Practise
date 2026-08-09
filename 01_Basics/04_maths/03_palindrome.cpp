#include <iostream> 

using namespace std;

int palindrom(int n){
    int rev = 0;
    int x = n;
    while(n !=0){
        int digit = n%10;
        rev = (10*rev) + digit;
        n = n/10;
    }

    
    if(x == rev){
        return 1;
    }else{
        return 0;
    }

}

int main() {
    int n;
    cin>>n;
    int result = palindrom(n);
    if(result == 1){
        cout<<"true";
    }else{
        cout<<"false";
    }
    
    return 0;
}