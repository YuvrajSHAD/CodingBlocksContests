#include<iostream>
using namespace std;
int main() {
	int n;
	cin >> n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin >> arr[i];
	}
	int temp[n];
	for(int i=0;i<n;i++){
		temp[i] = arr[i];
	}
	int q;
	cin >> q;
	while(q!=0){
		int x;
		cin >> x;
		if(x==1){
			temp[0] = arr[0]+arr[n-1];
			for(int i=1;i<n;i++){
				temp[i]= arr[i]+arr[i-1];
			}
			for(int i=0;i<n;i++){
				arr[i] = temp[i];
			}q--;
		}
		else{
			for(int i=0;i<n;i++){
				temp[i]= arr[i]+arr[i];
			}
			for(int i=0;i<n;i++){
				arr[i] = temp[i];
			}q--;
		}
	}
	int sum =0;
	for(int i =0;i<n;i++){
		sum = sum+ arr[i];
		// cout << sum <<endl;
	}
	int ans =  sum % (1000000007);
	cout << ans;
	return 0;
}