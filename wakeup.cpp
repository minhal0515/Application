#include "bits/stdc++.h"
 
#ifdef local
#include "custom/debugger.h"
#else
#define debug(...) 42;
#endif
 
using namespace std;
#define int long long
 
void solve([[maybe_unused]] int test) {
    int n,k;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n-1;i++){
        v[i]=0;
    }
    v[n-1] = 1;
    for(int i=0;i<n;i++){
        cout<<v[i];
    }
    cout<<'\n';
}
 
int32_t main() {
    int t = 1;
    cin >> t;
    for (int tt = 1; tt <= t; tt++) {
        solve(tt);
    }
}