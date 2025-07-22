// Author: Prakhar Patel
// Date: 2025-07-21
// Description: Minimal C++ template for competitive programming with fast I/O

#include <bits/stdc++.h>
using namespace std;

#define fast ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

int main() {
    fast;
    // your code here

    int n;
    cin>>n;

    int a[n-1];
    for(int i=0;i<n-1;i++){
      cin>>a[i];
    }

    int sum_all = 0;
    for(int i=0;i<n-1;i++){
      sum_all += a[i];
    }

    int sum_numbers = 0;
    for(int i=0;i<=n;i++){
      sum_numbers += i;
    }

    cout<<(sum_numbers - sum_all)<<endl;
    return 0;
}