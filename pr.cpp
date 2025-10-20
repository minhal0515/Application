#include "bits/stdc++.h"
 
#ifdef local
#include "custom/debugger.h"
#else
#define debug(...) 42;
#endif
 
using namespace std;
#define int long long
 
// void solve([[maybe_unused]] int test) {
//     int n,k;
    
// }
int32_t main() {
    const int MOD = 1e9+7;
    int t = 1;
    //cin >> t;
    for (int tt = 1; tt <= t; tt++) {
        //solve(tt);
        int n;
        cin>>n;
        if(n==1){
            cout<<1<<'\n';
            continue;
        }
        int count = 1;
        int sum = 0;
        vector <int> dp(n+1);
        int x = n;
        //dp[0]=1;
        int a = 1;
        int b=0;
        dp[0]=1;
        sum = 1;
        int ans = 0;
        for(int i=1;i<=n;i++){
            //count++;
            //sum+=dp[i-1];
            //dp[i]=sum;
            //cout<<dp[i]<<' '<<count<<' ';
            for(int j=1;j<=6;j++){
                if(i-j>=0){
                    dp[i]+=dp[i-j];
                    dp[i]%=MOD;
                }
            }
            ans=dp[i];

        }
        // for(int i=0;i<dp.size();i++){
        //       cout<<dp[i]<<' ';
        // }
        cout<<ans<<'\n';
    }
}