#include<iostream>
#include<string>
#include<vector>
#include<cmath>
using namespace std;
int findSum(string str,int sum=0)
{
    for (char ch : str)
    {
        if (isdigit(ch))
        {
            sum += ch - '0';
        }
    }
    return sum;
}
int countDigits(int n){
	int count = 0;
	while(n!=0){
		n=n/10;
		count++;
	}
	return count;
}
int factors(int n,int Tsum){
	int sum = 0,Fsum=0;
	vector<int> v;
	 while (n%2 == 0){
      v.push_back(2);
      n = n/2;
   }
   for (int i = 3; i <= sqrt(n); i = i+2){
      while (n%i == 0){
        v.push_back(i);
        n = n/i;
      }
   }
   if (n > 2){
	   v.push_back(n);
   }
   for(int i:v){
	   string stri = to_string(i);
	   sum=findSum(stri,sum);
	   Fsum+=sum;
   }
   if(sum == Tsum){
	   return 1;
   }
   else{
	   return 0;
   }
}

int main() {
	int n,Tsum=0;
	cin >> n;
	int count = countDigits(n);
	string stri = to_string(n);
	Tsum = findSum(stri,Tsum);
	bool ans = factors(n,Tsum);
	cout << ans;
	return 0;
}