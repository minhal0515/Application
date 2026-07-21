#include "bits/stdc++.h"
 
#ifdef local
#include "custom/debugger.h"
#else
#define debug(...) 42;
#endif
 
using namespace std;
#define int long long
int gcd(int a,int b) {
    return (b==0)?a:gcd(b,a%b);
}
 
int32_t main() {
    int t = 1;
    //cin >> t;
    for (int tt = 1; tt <= t; tt++) {
        int n;
        cin>>n;
        vector<string> g(n);
        for(int i=0;i<n;i++){
            cin>>g[i];
        }
        vector<vector<int>> dp(n, vector<int>(n,0));
        for(int i=0;i<n;i++){
            if(g[i][0]=='*'){
                break;
            }
            dp[i][0]=1;
        }
        for(int i=0;i<n;i++){
            if(g[0][i]=='*'){
                break;
            }
            dp[0][i]=1;
        }
        for(int i=1;i<n;i++){
            for(int j=1;j<n;j++){
                if(g[i][j]=='*'){
                    continue;
                }
                dp[i][j]=(dp[i-1][j]+dp[i][j-1])%1000000007;
            }
        }
        cout<<dp[n-1][n-1]<<'\n';
        
    }
}