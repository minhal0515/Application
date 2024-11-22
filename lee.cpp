#include "bits/stdc++.h"
 
#ifdef local
#include "custom/debugger.h"
#else
#define debug(...) 42;
#endif
 
using namespace std;
#define int long long
 
void solve([[maybe_unused]] int test) {
    int n,k;
    cin>>n>>k;
    vector <int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    sort(v.begin(), v.end());
    int ans = 0;
    int j = 0;
    for(int i=0;i<n;i++){
        j = max(i,j);
        while(j<n-1 && v[j+1]-v[j]<=1 && v[j+1]-v[i]<k){
            j++;
        }
        ans = max(ans,j-i+1);
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