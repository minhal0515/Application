#include "bits/stdc++.h"
 
#ifdef local
#include "custom/debugger.h"
#else
#define debug(...) 42;
#endif
 
using namespace std;
#define int long long
 
void solve([[maybe_unused]] int test) {
    int n,m,k;
    cin>>n>>m>>k;
    string v;
    cin>>v;
    int c = 0;
    int ans = 0;
    for(int i=0;i<n;i++){
        if(v[i]=='0'){
            c++;
        }
        else{
            c = 0;
        }
        if(c==m){
            ans++;
            i+=k-1;
            c=0;
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