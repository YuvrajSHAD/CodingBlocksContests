#include<iostream>
using namespace std;

int main() {
	int n,m;
	cin >> n >> m;
	int arr[n][m];
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin >> arr[i][j];
		}
	}
	int key;
	bool flag = false;
	cin >> key;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(arr[i][j] == key){
				flag = true;
				break;
			}
		}
	}
	if(flag){
		cout << 1;
	}
	else{
		cout << 0;
	}
	return 0;
}