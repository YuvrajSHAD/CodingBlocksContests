#include<iostream>
using namespace std;
int main() {
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		int k;
		cin>>k;
		int p=1;
		int res=0;
		while(k>0){
			int temp=k%10;
			res+=temp*p;
			k=k/10;
			p=p*2;
		}
		cout<<res<<endl;
	}
	return 0;
}