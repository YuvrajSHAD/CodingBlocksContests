#include<iostream>
using namespace std;
void printPattern(int n){
	int k=1;
	for(int i=1;i<=n;i++){
		for(int j=0;j<i;j++){
			cout << k << "\t";
			k++;
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