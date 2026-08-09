#include <iostream>
using namespace std;

void Grade(int x){
    if(x>=90){
        cout<<"Grade A";
    }else if(x>=70){
        cout<<"Grade B";
    }else if(x>=50){
        cout<<"Grade C";
    }else if(x>=35){
        cout<<"Grade D";
    }else{
        cout<<"Fail";
    }

}


int main(){
    int x;
    cout<<"marks"<<endl;
    cin>>x;
    Grade(x);
    return 0;
}