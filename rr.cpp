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
   // cin >> t;
    for (int tt = 1; tt <= t; tt++) {
        int n,x;
        cin>>n>>x;
        vector <int> v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        vector <int> dp(x+1);
        dp[0]=1;
        for(int i=1;i<=x;i++){
            for(int j=0;j<n;j++){
                if(v[j]>i){
                    continue;
                }
                dp[i]=(dp[i]+dp[i-v[j]])%1000000007;
            }
        }
        int ans=dp[x];
        cout<<ans<<'\n';
    }
}