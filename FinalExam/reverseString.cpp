#include <iostream>
#include <string>
using namespace std;

void reverseString(string s){
    //base case
    if(s.length() == 0){
        return;
    }

    //recursive 
    string ros = s.substr(1);
    reverseString(ros);
    cout << s[0];
}

int main(){
    
    string str;
    getline(cin,str);
    reverseString(str);


return 0;
}