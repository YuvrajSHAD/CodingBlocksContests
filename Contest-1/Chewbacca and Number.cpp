#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
	// char a[50];
	// cin>>a;
	// int i=0;
	// if(a[i]=='9')
	// 	i++;
	// 	for(;a[i]!='\0';i++){
	// 		int digit=a[i]-'0';
	// 		if(digit>=5){
	// 			digit=9-digit;
	// 			a[i]=digit+'0';
	// 		}
		
	// 	}
	// 	cout<<a<<endl;
	string n;
	cin >> n;
	int len = n.size();
	for(int i=0;i<len;i++){
		char c = n[i];
		if(i==0 &&  c>='5' && c <'9'){
			n[i]='9'-c+'0';
		}
		else if(i>0 && c>='5'){
			n[i]='9'-c+'0';
		}
	}cout << n;
	return 0;
}