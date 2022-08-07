#include<bits/stdc++.h>

using namespace std;
int countDigit(int n){
	int count=0;
	while(n>0){
		count++;
		n=n/10;
	}
	return count;
}

void check(long n,int count)
{
	long n1=n,ans=0;
	while(n>0)
	{
		int digit = n%10;
		ans+=pow(digit,count);
		n/=10;
	}
	if(n1==ans)
		cout << "true";
	else{
		cout << "false";
	}
}

int main()
{
	int n;
	cin>>n;
	int count = countDigit(n);
	check(n,count);
	return 0;
}