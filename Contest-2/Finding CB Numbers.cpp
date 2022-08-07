#include<iostream>
// #include<string>
using namespace std;
bool CBnum(long long num){
	if(num==0 || num==1)
		return false;
	int arr[]={2,3,5,7,11,13,17,19,23,29 };
	for(int i=0;i<10;i++)
		if(arr[i]==num)
			return true;
	for(int i=0;i<10;i++)
		if(num%arr[i]==0)
			return false;
	return true;
}

bool isVisited(bool visited[],int start,int end){
	for(int i=start;i<end;i++)
		if(visited[i])
			return false;
	return true;
}

int main() {
	int n;
	cin >> n;
	string str;
	cin >> str;
	// bool array 
	bool visited[100] = {false};
	int count = 0;
	for(int i=1;i<=str.length();i++){
		for(int j=0;j<=str.length()-i;j++){
			if(CBnum(stoll(str.substr(j,i))) && isVisited(visited,j,i+j)){
				count++;
				for(int k=j;k<i+j;k++){
					visited[k] = true;
				}
			}
		}
	}
	cout << count;
	return 0;
}