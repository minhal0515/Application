#include "bits/stdc++.h"
 
#ifdef local
#include "custom/debugger.h"
#else
#define debug(...) 42;
#endif
 
using namespace std;
#define int long long
 
int count(int n){
    if(n==0){
        return 0;
    }
    int x=log2(n);
    int fb=x*(1ll<<(x-1));
    int msb=n-(1ll<<x)+1;
    int r=n-(1ll<<x);
    int rb=count(r);
    return fb+msb+rb;
}
 
int32_t main() {
    int t = 1;
    //cin >> t;
    for (int tt = 1; tt <= t; tt++) {
        int n;
        cin>>n;
        int a=count(n);
        cout<<a;    
    }
}