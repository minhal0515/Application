#include "bits/stdc++.h"
 
#ifdef local
#include "custom/debugger.h"
#else
#define debug(...) 42;
#endif

using namespace std;
using ll = long long;
#define int long long
 




void solve([[maybe_unused]] int test) {
    int n,k;
    cin>>n>>k;
    vector <int> l(n);
    vector <int> r(n);
    vector <int> real(n);
    for(int i=0;i<n;i++){
        cin>>l[i]>>r[i]>>real[i];
    }
    vector<tuple<int,int,int>> t;
    for(int i=0;i<n;i++){
        t.emplace_back(l[i],r[i],real[i]);
    };
    sort(t.begin(),t.end());
    int ans = k;
    for (auto &tuple:t) {
    int a,b,c;
    tie(a,b,c) = tuple;
    if(ans>=a && ans<=b){
        if(c>=ans){
            ans=c;
        }
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