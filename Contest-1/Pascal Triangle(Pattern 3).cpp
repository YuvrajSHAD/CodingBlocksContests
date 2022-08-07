#include <iostream>
using namespace std;

// using recursion:
int pascal(int row, int col){
	if(col ==1 or col ==row) return 1;
	return (pascal(row-1,col-1) + pascal(row-1,col));
}

void Traingle(int rows){
	for(int r=1;r<=rows;r++){
		for(int c=1;c<=r;c++){
			cout << pascal(r,c) <<  "\t";
		}
		cout << endl;
	}
}

int main(){
	int rows;
	cin >> rows;
	Traingle(rows);
}