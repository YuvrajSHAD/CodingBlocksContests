#include<iostream>
using namespace std;
int main() {
	int n;
	cin >> n;
	//upper half
	for(int i=0;i<n;i++){
		for(int k=0;k<n-i;k++){
			cout << "*";
		}
		for(int j=0;j<2*i-1;j++){
			cout << " ";
		}
		int no_stars= n-i;
		if(i==0){
			no_stars--;
		}
		for(int l=0;l<no_stars;l++){
			cout << "*";
		}
		cout << endl;
	}
	// lower half
	for(int i=n-2;i>=0;i--){
        for(int j=0;j<n-i;j++)
            cout<<"*";

        for(int j=0;j<(2*i-1);j++)
            cout<<" ";

        int no_of_stars = n-i;
        if(i==0)
            no_of_stars--;

        for(int j=0;j<no_of_stars;j++)
            cout<<"*";

        cout<<endl;
    }
	return 0;
}