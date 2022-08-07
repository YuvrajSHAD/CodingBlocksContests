#include<iostream>
#include<cmath>
using namespace std;

int main() {
	long int n;
	cin >> n;
	long int x=0,r=0;
	while(n>0)
	{
		int a=n%10;
		n/=10;
		x++;
		a--;
		if(a!=4)
			r+=(pow(10,a)*x);
		else
			r+=10000*x;
	}
	cout << r;
	return 0;
}