#include<iostream>
#include<math.h>
#include<cmath>
using namespace std;
int main() {
	int a,b,c;
	cin >> a>>b>>c;
	int d = b*b - 4*a*c;
	double sqrt_val = sqrt(abs(d));

	if(d>0){
		cout << "Real and Distinct" <<endl;
		int r1 = (int)(-b + sqrt_val) / (2*a);
		int r2 = (int)(-b - sqrt_val) / (2*a);
		r1<r2?cout << r1 <<" " <<r2:cout << r2 <<" " <<r1;
	}
	else if(d==0){
		cout << "Real and Equal" <<endl;
		int r = (int)(-b + sqrt_val) / (2*a);
		cout << r << " " <<r <<endl;
	}
	else {
		cout << "Imaginary" <<endl;
	}
	return 0;
}