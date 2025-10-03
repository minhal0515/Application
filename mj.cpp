#include "bits/stdc++.h"

#ifdef local
#include "custom/debugger.h"
#else
#define debug(...) 42;
#endif
 
using namespace std;
#define int long long
 
void solve([[maybe_unused]] int test) {
    int n,ak,bk,ad,bd;
    cin>>n>>ak>>bk>>ad>>bd;
    int ans = 0;
    if(ak>ad && bk>bd){
        ans = max(n-ad, n-bd);
    } else if(bk<bd && ak>ad){
        ans = max(bd, n-ad);
    } else if(ak<ad && bk>bd){
        ans=max(n-bd, ad);
    } else if(ak<ad && bk<bd){
        ans = max(ad,bd);
    } else if(ak==ad){
        if(bk>bd){
            ans = n-bd;
        } else{
            ans=bd;
        }
    } else if(bk==bd){
        if(ak>ad){
            ans=n-ad;
        } else{
            ans=ad;
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