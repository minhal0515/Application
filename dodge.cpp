#include "bits/stdc++.h"
 
#ifdef local
#include "custom/debugger.h"
#else
#define debug(...) 42;
#endif
 
using namespace std;
#define int long long
const int m=1e9+7;
const int tmi=500000004;

 
void solve([[maybe_unused]] int test) {
    int n;
    cin>>n;
    int s=0;
    int ans=0;
    vector <int> a(n+1);
    for(int i=1;i<=n;i++){
        cin>>a[i];
        s^=a[i];
    }
    if(n==1){
        cout<<0<<'\n';
        return;
    }
    if(!s){
        cout<<1<<'\n';
        return;
    }
    for(int i=1;i<=n;i++){
        if((s^a[i])<a[i]){
            ans++;
        }
    }
    ans%=998244353;
    cout<<ans<<'\n';
}
 
int32_t main() {
    int t = 1;
    cin >> t;
    for (int tt = 1; tt <= t; tt++) {
        solve(tt);
    }
}