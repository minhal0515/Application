#include "bits/stdc++.h"
 
#ifdef local
#include "custom/debugger.h"
#else
#define debug(...) 42;
#endif
 
using namespace std;
#define int long long
 
void solve([[maybe_unused]] int test) {
   int n;
    cin>>n;
    vector <int> v;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    vector <int> ans(n);
    for(int i=0;i<n;i++){
        int c;
        c = min(v[i], n-v[i]-1);
        ans[c]++;
    }    
    int f = 0;
    for(int i=0;i<n/2;i++){
        if(ans[i]!=0){
            f=1;
            break;
        }
    }
    int ans = 1;
    for (int i=0;i<n/2;i++){
        ans=ans*2;
        ans=ans%998244353;
    }
    if(f==0){
        cout<<"Yes"<<'\n';
    }else{
        cput<<0<<'\n';
    }
}
 
int32_t main() {
    int t = 1;
    cin >> t;
    for (int tt = 1; tt <= t; tt++) {
        solve(tt);
    }
}