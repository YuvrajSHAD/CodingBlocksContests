#include<bits/stdc++.h>

using namespace std;

int main()
{
     long a=0,b=1,c;
     long count=1,n;

     cin>>n;
     if(n>1)
     {
          while(count<n)
          {
               c=a+b;
               a=b;
               b=c;
               count++;
          }
          cout<<b;
     }else if(n==1)
     cout<<"1";
}

//  using recursion

// #include <iostream>
// using namespace std;

// int fibonacci(int n){

//     if(n==0 or n==1){
//         return n;
//     }



//     return fibonacci(n-1) + fibonacci(n-2);
// }


// int main() {

// int n;
// cin>>n;

// cout<<fibonacci(n);

//     return 0;
// }