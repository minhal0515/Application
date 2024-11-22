#include "bits/stdc++.h"
#include <iostream>
#include <set>
#ifdef local
#include "custom/debugger.h"
#else
#define debug(...) 42;
#endif
 
using namespace std;
#define int long long
 
// void solve([[maybe_unused]] int test) {

// }
 
int32_t main() {
    int t = 1;
    cin >> t;

    for (int tt = 1; tt <= t; tt++) {
        int n,m,k;
        cin>>n>>m>>k;
        int k1 = n;
        for(int i = 0;i<n-m;i++){
            cout<<k1<<' ';
            k1--;
        }
        for(int i = 0;i<m;i++){
            cout<<i+1<<' ';
        }
        cout<<'\n';
    }
}