#include<iostream>
using namespace std;

int linearSearch(int arr[],int n,int m){
	int index;
	for(int i;i<n;i++){
		if(arr[i]==m){
			index =i;
			break;
		}
		else{
			index = -1;
		}
	}return index;
}

int main() {
	int n,k,arr[n];
	cin >> n;
	for(int i=0;i<n;i++){
		cin >> arr[i];
	}
	cin >> k;
	cout << linearSearch(arr,n,k);
	return 0;
}