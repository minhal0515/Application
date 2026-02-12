#include "bits/stdc++.h"
 
#ifdef local
#include "custom/debugger.h"
#else
#define debug(...) 42;
#endif
 
using namespace std;
#define int long long
 
void solve([[maybe_unused]] int test) {
    int n,x,y;
    cin>>n>>x>>y;
    vector <int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=(a[i]/x)*y;
    }
    int ans=0;
    for(int i=0;i<n;i++){
        if(a[i]+sum-((a[i]/x)*y)>ans){
            ans=a[i]+sum-((a[i]/x)*y);
        }
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