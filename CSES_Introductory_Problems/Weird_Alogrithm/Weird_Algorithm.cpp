// Author: Prakhar Patel
// Date: 2025-07-21
// Description: Minimal C++ template for competitive programming with fast I/O

#include <bits/stdc++.h>
using namespace std;

#define fast ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

int main() {
    fast;
    // your code here

    long long n;
    cin>>n;

    cout<<n<<" ";
    while(n>1){
      if(n%2!=0){
        n = (n*3) + 1;
      }
      else{
        n = n/2;
      }
      cout<<n<<" ";
    }
    return 0;
}