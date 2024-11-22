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
    int k;
    cin>>n>>k;
    vector <pair<int,int>> a(n);
    vector <int> b(n);
    vector <int> ans(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i].first;
        a[i].second = i;
    }
    for(int i=0;i<n;i++)
    {
        cin>>b[i];
    }
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    for(int i=0;i<a.size();i++)
    {
       ans[a[i].second] = b[i];
    }
    for(int i=0;i<ans.size();i++)
    {
        cout<<ans[i]<<" ";
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