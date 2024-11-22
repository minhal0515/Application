#include "bits/stdc++.h"
#ifdef local
#include "custom/debugger.h"
#else
#define debug(...) 42;
#define ll long long
#endif

using namespace std;
#define int long long

void solve([[maybe_unused]] int test) {
    int n;
    cin>>n;
    vector <int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a.begin(),a.end());
    int ans = 0;
    for(int i=0;i<n-1;i++){
        a[i+1] = (a[i]+a[i+1])/2;
        ans=a[i+1];
    }
    cout<<ans<<'\n';
}

int32_t main() {
    int t;
    cin >> t;
    for (int tt = 1; tt <= t; tt++) {
        solve(tt);
    }
}
