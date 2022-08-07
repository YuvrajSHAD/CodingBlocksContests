#include<iostream>
#include<cmath>
using namespace std;

bool isPrime(int n)
{
    // Corner case
    if (n <= 1)
        return false;
 
    // Check from 2 to n-1
    for (int i = 2; i < n; i++)
        if (n % i == 0)
            return false;
 
    return true;
}
int main() {
	long n;
	cin >> n;

	bool ans = isPrime(n);
	if(ans){
		cout << "Prime";
	}
	else cout << "Not Prime";
	return 0;
}