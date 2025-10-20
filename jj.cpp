#include "bits/stdc++.h"
 
#ifdef local
#include "custom/debugger.h"
#else
#define debug(...) 42;
#endif
 
using namespace std;
typedef long long ll;
 
// void solve([[maybe_unused]] int test) {
    
// }
ll gcd(ll x, ll y) {
        if(y==0){
            return x;
        }
        return gcd(y, x%y);
}
 
int32_t main() {
    int t = 1;
    cin >> t;
    for (int tt = 1; tt <= t; tt++) {
        int a,b;
        cin>>a>>b;
        int ans = 0;
        ans = (a/gcd(a,b))*b;
        cout<<ans<<'\n';
    }
}