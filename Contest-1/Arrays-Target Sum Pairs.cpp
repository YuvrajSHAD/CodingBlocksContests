#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void targetSum(int arr[], int n, int target){
    sort(arr,arr+n);
    for(int i=0;i<n-1;i++){
        for(int j=i-1;j<n;j++){
            if(arr[i]+arr[j] <= target && i<j){
                if(arr[i]+arr[j]== target){
                    cout << arr[i] << " and " << arr[j] << endl;
                }
            }else if(arr[i]+arr[j] >= target && i<j){
                if(arr[i]+arr[j] == target){
                    cout << arr[i] << " and " << arr[j] << endl;
                }
            }
        }
    }
}
int main() {
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int x;
	cin>>x;
	targetSum(arr,n,x);
	return 0;
}