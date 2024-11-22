#include "bits/stdc++.h"
 
#ifdef local
#include "custom/debugger.h"
#else
#define debug(...) 42;
#endif
 
using namespace std;
#define int long long
 
void solve([[maybe_unused]] int test) {
    int n,q;
    cin>>n>>q;
    int ans = 0;
    int x=0;
    int sum=0;
    vector <int> a(n);
    vector <int> b(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        cin>>b[i];
    }
    //sort(b.begin(),b.end());
    for(int i=0;i<n;i++)
    {
        if(x+a[i]<=q and sum<b[i])
        {
            sum=b[i];
            ans = i+1;
        }
        if(sum==0)
        {
            ans = -1;
        }
        x=x+1;
    }
    cout<<ans<<'\n';

    
}
 
int32_t main() {
    int t = 1;
    cin >> t;
    for (int tt = 1; tt <= t; tt++) {
        solve(tt);
    }
}