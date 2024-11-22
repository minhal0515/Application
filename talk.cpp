#include "bits/stdc++.h"
 
#ifdef local
#include "custom/debugger.h"
#else
#define debug(...) 42;
#endif
 
using namespace std;
#define int long long
 
void solve([[maybe_unused]] int test) {
     cin>>n;
        
    ll a[n];
        
    dec=0;
    inc=0;
        f=0;
        for(i=0; i<n; i++)
        {
            cin>>a[i];
        }
        
        for(i=1; i<n; i++)
        {
        if(a[i]>a[i-1])
        {
                inc++;
        }
        else if(a[i]<a[i-1]){
            dec++;
            if(inc>0){
                f++;
                break;
                }
            }
    }
        
    if(f==0)
    cout<<"YES\n";
    else
    cout<<"NO\n";

}
 
int32_t main() {
    int t = 1;
    cin >> t;
    for (int tt = 1; tt <= t; tt++) {
        solve(tt);
    }
}