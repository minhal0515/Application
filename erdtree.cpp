#include "bits/stdc++.h"
 
#ifdef local
#include "custom/debugger.h"
#else
#define debug(...) 42;
#endif
 
using namespace std;
#define int long long
 
void solve([[maybe_unused]] int test) {
    //int n;
    int a;
    int ans=0;
    //scanf("%lld",&n);
    cin>>a;
    
    while(a>0)
    {
        ans = ans+a;
        a=a/2;
    }
    cout<<ans<<"\n";    

}
 
int32_t main() {
    int t = 1;
    cin >> t;
    for (int tt = 1; tt <= t; tt++) {
        solve(tt);
    }
}