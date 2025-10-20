#include "bits/stdc++.h"
 
#ifdef local
#include "custom/debugger.h"
#else
#define debug(...) 42;
#endif
 
using namespace std;
#define int long long
 
void solve([[maybe_unused]] int test) {
    int n,m;
    cin>>n;
    vector <int> v;
    for(int i=0;i<n;i++){
        cin>>m;
        v.push_back(m);
    }

    sort(v.begin(),v.end());
    int count = 1;
    for(int i=0;i<n-1;i++){
        if(v[i]!=v[i+1]){
            count++;
        }
    }
    cout<<count<<'\n';
 
}
 
int32_t main() {
    int t = 1;
    cin >> t;
    for (int tt = 1; tt <= t; tt++) {
        solve(tt);
    }
}