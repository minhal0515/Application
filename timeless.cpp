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
    int n,q;
    cin>>n>>q;
    vector <int> v(n);
    map<ll,ll> m;
    int x;
    for(int i=1;i<=n;i++){
        cin>>v[i];
        m[i*(n-i+1)-1]++;
    }
    for(int i=1;i<=n;i++){
        m[i*(n-i)]+=v[i+1]-v[i]-1;
    }
    while(q--){
        cin>>x, cout<<m[x]<<' ';
    }
    cout<<'\n';
}

int32_t main() {
    int t;
    cin >> t;
    for (int tt = 1; tt <= t; tt++) {
        solve(tt);
    }
}
