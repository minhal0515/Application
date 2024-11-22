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
        int n;
        cin>>n;
        int x = 1;
        for(int i = 0;i<n;i++){
            cout<<x<<' ';
            x++;
        }
        cout<<'\n';
        
    }
}