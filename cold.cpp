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
    cin>>n;
    vector<int> v(n);
    int sum = 0;
    for(int i=0;i<n;i++){
        cin>>v[i];
        sum+=v[i];
    }
    if(n==1 or n==2){
        cout<<-1<<'\n';
        return;
    }
    sort(v.begin(),v.end());
    int x = n/2;
    int a = sum/(n*2);
    int h = v[x];
    if(h*(n*2)<sum){
        cout<<0<<'\n';
        return;
    }
    int ns = 0;
    ns = (n*2)*h+1;
    int ans = ns-sum;
    cout<<ans<<'\n';
}

int32_t main() {
    int t;
    cin >> t;
    for (int tt = 1; tt <= t; tt++) {
        solve(tt);
    }
}
