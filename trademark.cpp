#include "bits/stdc++.h"
 
#ifdef local
#include "custom/debugger.h"
#else
#define debug(...) 42;
#endif
 
using namespace std;
#define int long long
 
void solve([[maybe_unused]] int test) {
    int n;
    scanf("%lld", &n);
    int a=1;
    vector <int> ans;
    cout<<a<<' ';
    for (int i = 0; i < n-1; ++i)
    {
        a = a+2;
        ans.push_back(a);
    }
    for(int i=0;i<ans.size();i++)
    {
        cout<<ans[i]<<' ';
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