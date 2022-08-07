#include<iostream>
using namespace std;
int main() {
	int N;
	cin>>N;
	for(int i=0;i<N;i++){
		int n;
		cin>>n;
		int even=0,odd=0;
		while(n>0){
			int temp=n%10;
			if(temp%2==0)
				even+=temp;
			else
				odd+=temp;
			n=n/10;
		}
		if(even%4==0)
			cout<<"Yes"<<endl;
		else if(odd%3==0)
			cout<<"Yes"<<endl;
		else
			cout<<"No"<<endl;
	}
	return 0;
}