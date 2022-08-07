#include<iostream>
using namespace std;

void printPattern(int n){
	int k=(2*n)-3;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=i;j++){
			cout << j << "\t";
		}
		for(int j=1;j<=k;j++){
			cout << "\t";
		}
		if(i==n){
			for(int j=i-1;j>=1;j--)
				cout<<j<<"\t";
		}
		else{
			for(int j=i;j>=1;j--)
               cout<<j<<"\t";
		}
		k-=2;
		cout << endl;
	}
}
int main() {
	int n;
	cin >> n;
	printPattern(n);
	return 0;
}