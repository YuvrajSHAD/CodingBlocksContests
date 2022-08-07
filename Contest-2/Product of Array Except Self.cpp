#include <iostream>
using namespace std;
void printProduct(long long arr[],int n){
    for(int i=0;i<n;i++){
        int k=i;
        long long product =1;
        for(int j=0;j<n;j++){
            if(k==j){
                continue;
            }
            else{
                product = product * arr[j];
            }
        }cout << product << " ";
    }
}

int main(){
    int n;
    cin >> n;
    long long arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }

    printProduct(arr,n);
    return 0;
}