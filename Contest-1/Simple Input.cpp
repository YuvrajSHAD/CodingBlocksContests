#include<iostream>
#include<vector>
using namespace std;
int main() {
	int n;
	int sum =0;
	while(sum >=0){
		cin >> n;
		sum +=n;
		if(sum < 0){break;}
		else{
			cout << n <<endl;
		}
	}
	return 0;
}