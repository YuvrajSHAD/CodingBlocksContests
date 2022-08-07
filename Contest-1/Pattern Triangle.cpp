#include<iostream>
using namespace std;
void printPattern(int n){
	for(int i=1;i<=n;i++){
		for(int j=0;j<n-i;j++){
			cout << "\t";
		}
		for(int k=i;k<2*i;k++){
			cout << k << "\t";
		}
		for(int l=2*i-2;l>=i;l--){
			cout << l << "\t";
		}
		cout << endl;
	}
}
int main() {
	int n;
	cin >> n;
	printPattern(n);
	return 0;
}