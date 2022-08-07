#include <iostream>
#include <bits/stdc++.h>
using namespace std;


int main(){

    int n,m;
    cin >> n >> m;
    int arr[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin >> arr[i][j];
        }
    }
    int st_row=0, st_col=0,end_row=n-1,end_col=m-1;
    int count=0,total=m*n;
    while(count < total){
        for(int i=st_col;i<=end_col && count < total;i++){
            cout << arr[st_row][i]<<", ";
            count++;
        }st_row++;
        for(int i=st_row;i<=end_row && count < total;i++){
            cout << arr[i][end_col] <<", ";
            count++;
        }
        end_col--;
        // if (st_row < end_row){
            for(int i = end_col;i>=st_col  && count < total;i--){
                cout << arr[end_row][i] << ", ";
                count++;
            }end_row--;
        // }
        // if(st_col < end_col){
            for(int i=end_row;i>=st_row  && count < total;i--){
                cout << arr[i][st_col] << ", ";
                count++;
            }st_col++;
        // }
    }cout << "END";


return 0;
}