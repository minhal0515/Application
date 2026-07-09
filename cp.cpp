#include "bits/stdc++.h"
 
#ifdef local
#include "custom/debugger.h"
#else
#define debug(...) 42;
#endif
 
using namespace std;
#define int long long
 
void solve([[maybe_unused]] int test) {
    string a,b;
    cin>>a>>b;
    int n=a.size();
    int m=b.size();
    vector<int> pa(n+1);
    vector<int> pb(m+1);
    for(int i=0;i<n;i++){
        pa[i+1]=(pa[i]+(a[i]-'0'))%10;
    }
    for(int i=0;i<m;i++){
        pb[i+1]=(pb[i]+(b[i]-'0'))%10;
    }

    if(pa.back()!=pb.back()){
        cout<<-1<<'\n';
        return;
    }
    int ans=0;
    vector<vector<int>>dp(n+1,vector<int>(m+1));
    for(int j=1;j<=m;j++){
        for(int i=1;i<=n;i++){
            dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
            if(pa[i]==pb[j]){
                dp[i][j]=dp[i-1][j-1]+1;
            }
        }
    }
    cout<<dp[n][m]<<'\n';

}
 
int32_t main() {
    int t = 1;
    cin >> t;
    for (int tt = 1; tt <= t; tt++) {
        solve(tt);
    }
}