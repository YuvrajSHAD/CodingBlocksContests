#include <iostream>
#include <string>
using namespace std;

void giveNew(string str){
    for(int i=0;i<str.length();i++){
        int count = 1;
        // cout << str.length();
        while(i<str.length()-1 && str[i] == str[i+1]){
            count++;
            i++;
        }cout << str[i]<<count;
    }
}
int main(){

    string str;
    string temp;
    cin >> str;

    giveNew(str);
    return 0;
}