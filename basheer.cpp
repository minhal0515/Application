#include "bits/stdc++.h"
 
#ifdef local
#include "custom/debugger.h"
#else
#define debug(...) 42;
#endif
 
using namespace std;
#define int long long

 
int32_t main() {
    int t = 1;
    //cin >> t;
    for (int tt = 1; tt <= t; tt++) {
        int n;
        cin>>n;
        vector <int> v(n);
        map<int, int> mp;
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        int ans=0;
        int p=0;
        for(int i=0;i<n;i++){
            if(mp.find(v[i])==mp.end()){
                mp.insert({v[i],i});
            } else{
                if(mp[v[i]]>=p){
                    p=mp[v[i]]+1;
                }
                mp[v[i]]=i;
            }
            if((i-p+1)>ans){
                ans=i-p+1;
            }
        }
        cout<<ans<<'\n';

    }
}