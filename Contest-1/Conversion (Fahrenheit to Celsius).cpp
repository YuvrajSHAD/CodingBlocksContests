#include<iostream>
using namespace std;

int main() {
	int min_v,max_v,n;
	cin >> min_v >> max_v >> n;
	while(min_v <= max_v){
		int c = ((5)*(min_v-32))/9; // given formula is incorrect
		cout <<min_v <<" " << c << endl;
		min_v+=n;
	}
	return 0;
}