#include "bits/stdc++.h"
 
#ifdef local
#include "custom/debugger.h"
#else
#define debug(...) 42;
#endif
 
using namespace std;
#define int long long
 
// void solve([[maybe_unused]] int test) {
    
// }
 
int32_t main() {
    int t = 1;
    //cin >> t;
    for (int tt = 1; tt <= t; tt++) {
        int n;
        cin>>n;
        vector <int> v(n);
        map <int,int> mp;
        int ans = 0;
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        for(int i=0;i<n;i++){
            int x = v[i]-(i+1);
        //    if(x>=0){
            mp[x]+=v[i];
        
        }
    for(auto& pair: mp){
         if(pair.second>ans){
            ans = pair.second;
         }
    }
    cout<<ans<<'\n';
    }
}