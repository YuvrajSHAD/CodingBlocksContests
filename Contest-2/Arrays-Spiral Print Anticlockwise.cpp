#include<iostream>
using namespace std;
int main() {
	int n,m;
	cin>>n>>m;
	int arr[n][m];
	for(int i=0;i<n;i++){    
		for(int j=0;j<m;j++){
			cin>>arr[i][j];
		}
	}
	// m=m-1;
	// n=n-1;
	int ec=m-1,sc=0;
	int er=n-1,sr=0;
	int i=0;
	int j=0;
	
	while(sc<=ec && sr<=er ){
		//print first column
		for(int i=sr;i<=er;i++){    //first column
			cout<<arr[i][sc]<<", ";

		}
	sc++;
	for(int i=sc;i<=ec;i++){     //last row
		cout<<arr[er][i]<<", ";
	}
	er--;
	if(sr<=er){
		for(int i=er;i>=sr;i--){   //last column
			cout<<arr[i][ec]<<", ";
		}
		
	}
	ec--;
	if(sc<=ec){
		for(int i=ec;i>=sc;i--){    //first row
			cout<<arr[sr][i]<<", ";
		}
		
	}
	sr++;
		
	}
	cout<<"END";
	return 0;
}
