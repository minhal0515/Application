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
        int m,a,b;
        cin>>a>>b>>m;
        int i=1;
        int count = 0;
        count+=(m/a);
        count+=(m/b);
        cout<<count+2<<'\n';
    }
}