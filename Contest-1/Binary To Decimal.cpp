#include<iostream>
#include<cmath>
using namespace std;

int main() {
	int n,x=0,z=2;
	cin >> n;
	int sum =0;
	// cout << pow(z,x);
	while(n>0){
		int temp = n%10;
		sum = sum+temp*pow(z,x);
		x++;
		n/=10;
	}
	cout << sum;
	return 0;
}
