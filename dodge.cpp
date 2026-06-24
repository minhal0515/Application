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

int ts(int s, int e){
    return((((e-s+1)%m)*((s+e)%m)%m)*tmi%m);
}
 
void solve([[maybe_unused]] int test) {
    int n;
    cin>>n;
    int t=0;
    int at=1;
    while(at<=n){
        int a1=n/at;
        int ls=n/a1;
        t=(t+a1*ts(at,ls))%m;
        at=ls+1;
    }
    cout<<t<<'\n';
}
 
int32_t main() {
    int t = 1;
   // cin >> t;
    for (int tt = 1; tt <= t; tt++) {
        solve(tt);
    }
}