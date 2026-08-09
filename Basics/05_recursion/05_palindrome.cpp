#include <iostream> 
#include <string>

using namespace std;

void palidrome(const string& str,int start,int end){
    if(start>=end){
        cout<<"true";
        return;
    }

    if(str[start] != str[end]){
        cout<<"false";
        return;
    }

    palidrome(str,start+1,end-1);
  
}

int main() {
    string str;
    cin>>str;
    int size = str.size();
    if (size == 0) {
        cout << "true";
    } else {
        palidrome(str, 0, size - 1);
    }



    
    
    return 0;
}