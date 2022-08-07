#include <bits/stdc++.h>
using namespace std;

int findWater(int arr[], int n)
{

	int left[n];
	int right[n];

	// Initialize result
	int water = 0;

	// Fill left array
	left[0] = arr[0];
	for (int i = 1; i < n; i++)
		left[i] = max(left[i - 1], arr[i]);

	// Fill right array
	right[n - 1] = arr[n - 1];
	for (int i = n - 2; i >= 0; i--)
		right[i] = max(right[i + 1], arr[i]);
	for (int i = 1; i < n - 1; i++) {
		int var = min(left[i - 1], right[i + 1]);
		if (var > arr[i]) {
			water += var - arr[i];
		}
	}

	return water;
}

int main()
{
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >>n;
		int arr[n];
		for(int i =0;i<n;i++){
			cin >> arr[i];
		}
		cout << findWater(arr, n) << endl;
	}
	
	return 0;
}