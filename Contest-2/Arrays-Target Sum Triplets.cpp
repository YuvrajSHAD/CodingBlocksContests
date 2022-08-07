#include<iostream>
#include<algorithm>
using namespace std;

void tripletSum(int arr[],int n, int tar){
    sort(arr,arr+n);
    for(int i=0;i<n-3;i++){
        int l = i+1;
        int r = n-1;
        while(l<r){
            int val = arr[i]+arr[l]+arr[r];
            if(val == tar){
                cout << arr[i] << ", "<<arr[l] <<" and " << arr[r] <<endl;
                l++;
                r--;
            }
            else if(val > tar){
                r--;
            }
            else if(val < tar){
                l++;
            }
        }
    }
}
int main() {
	int n;
	cin >>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin >> arr[i];
	}
	int target;
	cin >> target;
	tripletSum(arr,n,target);
	return 0;
}
