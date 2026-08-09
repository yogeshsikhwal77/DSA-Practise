#include <iostream> 

using namespace std;

int print(int n,int count){
    if(n == 0){
        return 0;
    }

    count=count+1;
    cout<<count<<endl;
    return print(n-1,count);
}

int main() {
    int n;
    cin>>n;
    int count = 0;
    print(n,count);
    
    return 0;
}