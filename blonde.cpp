#include "bits/stdc++.h"
 
#ifdef local
#include "custom/debugger.h"
#else
#define debug(...) 42;
#endif
 
using namespace std;
#define int long long
 
void solve([[maybe_unused]] int test) {
    int a;
    int b;
    int ans;
    cin>>a>>b;
    ans = abs(a-b);
    if(ans%2==0)
    {
        cout<<"Bob"<<'\n';
    }
    else
    {
        cout<<"Alice"<<'\n';
    }
}
 
int32_t main() {
    int t = 1;
    cin >> t;
    for (int tt = 1; tt <= t; tt++) {
        solve(tt);
    }
}