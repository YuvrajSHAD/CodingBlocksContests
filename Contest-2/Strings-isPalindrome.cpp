#include<iostream>
using namespace std;

int main() {
	string str;
	getline(cin,str);
	string str1;
	int n = str.length();
	for(int i=n-1;i>=0;i--){
		str1 = str1+str[i];
	}

	if(str == str1){
		cout << "true";
	}
	else
		cout << "false";
	return 0;
}