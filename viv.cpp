#include "bits/stdc++.h"
 
#ifdef local
#include "custom/debugger.h"
#else
#define debug(...) 42;
#endif
 
using namespace std;
#define int long long
int gcd(int a,int b) {
    return (b==0)?a:gcd(b,a%b);
}
 
int32_t main() {
    int t = 1;
    cin >> t;
    for (int tt = 1; tt <= t; tt++) {
        int n,m;
        cin>>n>>m;
        vector<int> a(n);
        vector<int> b(m);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<m;i++){
            cin>>b[i];
        }
        b.push_back(0);
        sort(b.begin(), b.end());
        vector<int> p(n+1);
        for(int i=0;i<n;i++){
            p[i+1]=p[i]+a[i];
        }
        int ans=0;
        for(int i=1;i<b.size();i++){
            ans+=abs(p[b[i]]-p[b[i-1]]);
        }
        ans+=p[n]-p[b.back()];
        cout<<ans<<'\n';
    }
}