#include<iostream>
using namespace std;

void wordsAre(string str, int n){
	cout << str[0];
	for(int i=1;i<n;i++){
		if(str[i] >='A' && str[i]<='Z'){
			cout << endl << str[i];
		}
		else{
			cout << str[i];
		}
	}
}
int main() {
	string str;
	getline(cin,str);
	int n =str.length();

	wordsAre(str,n);
	return 0;
}