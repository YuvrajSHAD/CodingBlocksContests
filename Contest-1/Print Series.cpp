#include<iostream>
using namespace std;

int main() {
	int n1,n2;
	cin >> n1 >> n2;
	int count = 1,i=1;
	while(count <= n1){
		int sum =0;
		sum = sum + ((3*i)+2);
		if(sum % n2!=0){
			cout << sum << endl;
			count++;
		}i++;
	}
	return 0;
}