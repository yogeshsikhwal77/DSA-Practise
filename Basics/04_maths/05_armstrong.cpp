#include <iostream> 
#include <cmath>

using namespace std;
int digit_count(int n){

    if(n == 0) return 1;
    int count = 0;
    while(n !=0){
        n = n/10;
        count = count +1;
    }

    return count;
}

int power_sum(int n,int count){
    int sum = 0;
    while( n!=0){
        int digit = n%10;
        int power = round(pow(digit,count));
        sum = sum + power ;
        n = n/10;

    }
    return sum;
}

void armstrong(int n){
    int count = digit_count(n);
    int sum = power_sum(n,count);
    if(sum==n){
        cout<<"true";
    }else{
        cout<<"false";
    }
}

int main() {
    int n;
    cin>>n;

    armstrong(n);


    
    return 0;
}