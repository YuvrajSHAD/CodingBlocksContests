#include<iostream>
using namespace std;

void printPattern(int n){
	for(int i=1;i<=n+1;i++){
        for(int j=1;j<=i;j++){
            cout<<n-j+1<<" ";  // half numbers
        }
        for(int j=1;j<=2*n-2*i+1;j++){  // the double of n - double of i +1 is actual spaces we need 
            cout<<"  ";  // spaces
        }
        for(int j=0;j<i;j++){
            if(i==n+1){  // only run for middle case that is for 5 to 5 including all numbers
                for(int k=1;k<=n;k++){
                    cout<<k<<" ";
                }
                break;
            }
            else{
               cout<<(n-i+1+j)<<" "; // right half
            }

        }
        cout<<endl;
    }


    for (int i=1;i<=n;i++){
        for(int j=0;j<n-i+1;j++){
            cout<<n-j<<" ";
        }
        for(int j=1;j<=2*i-1;j++){
            cout<<"  ";
        }
        for(int j=0;j<n-i+1;j++){
            cout<<i+j<<" ";
        }
        cout<<endl;
    }
}
int main() {
	int n;
	cin >> n;
	printPattern(n);
	return 0;
}