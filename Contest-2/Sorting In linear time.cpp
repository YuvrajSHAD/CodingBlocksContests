#include<iostream>
using namespace std;
void swap_number(int arr[],int i,int j){
	int temp=arr[i];
	arr[i]=arr[j];
	arr[j]=temp;
}
int main () {
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int i=0,j=0,k=n-1;
	while(i<=k){
		if(arr[i]==0){
			swap_number(arr,i,j);
			i++;
			j++;
		}
		else if(arr[i]==1)
			i++;
		else{
			swap_number(arr,i,k);
			k--;
		}
			
	}
	for(int i=0;i<n;i++)
		cout<<arr[i]<< " ";
	return 0;
}
