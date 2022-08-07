#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void maxValue(int arr[],int n){
	sort(arr,arr+n);
	cout << arr[n-1];
}
int main() {
	int n;
	cin >> n;
	int arr[n];
	for (int i=0;i<n;i++){
		cin >> arr[i];
	}

	maxValue(arr,n);
	return 0;
}
