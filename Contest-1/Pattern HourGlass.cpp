#include<iostream>
using namespace std;
void printHourGlass(int n){
	int temp =n;
    for (int i=1;i<=n+1;i++){
      	for(int j=1;j<=i-1;j++){
			cout<<"  ";
      	}
      	for(int j=0;j<=temp;j++){
			cout<<n-j-i+1<<" ";
		}
      	for(int j=1;j<=temp;j++){
			cout<<j<<" ";
      	}
      	cout<<endl;
		temp--;
    }
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n-i;j++){
			cout<<"  ";
		}
		for(int j=1;j<=i+1;j++){
			cout<<i+1-j<<" ";
		}
		for(int j=1;j<=i;j++){
			cout<<j<<" ";
		}
		cout<<endl;
    }
}
int main() {
	int n;
	cin >> n;
	printHourGlass(n);
	return 0;
}
