#include<iostream>
using namespace std;
void inverseArray(int arr[],int n,int arr2[]){
	for(int i=0;i<n;i++)
     {
          arr2[arr[i]]=i;
     }
     for(int i=0;i<n;i++)
          cout<<arr2[i]<<" ";
}
int main() {
	int n;
	cin >> n;
	int arr[n],arr2[n];
	for(int i=0;i<n;i++){
		cin >> arr[i];
	}
	inverseArray(arr,n,arr2);
	return 0;
}