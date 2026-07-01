#include "bits/stdc++.h"
using namespace std;
#define int long long

// void solve() {
//     int n;
//     cin >> n;
    
    vector<int> depth;
    vector<vector<int>> adj;
    vector<int> dp;
    vector<int> ans;
    void dfs(int v) {
        if(adj[v].empty()){
            dp[v]=depth[v];
            ans[v]=1;
            return;
        }
        int m1=0;
        int m2=0;
        dp[v]=depth[v];
        ans[v]=1;
        for (auto t:adj[v]){
            depth[t]=depth[v]+1;
            dfs(t);
            ans[v]+=ans[t];
            dp[v]=max(dp[v],dp[t]);
            int l= dp[t]-depth[v];
            if(l>=m1){
                m2=m1;
                m1=l;
            } else if(l>=m2){
                m2=l;
            }
        }
        ans[v]+=m2;
    }
int32_t main() {
    int t = 1;
    cin >> t;
    for (int tt = 1; tt <= t; tt++) {
        int n;
        cin>>n;
        adj.assign(n+1,{});
        depth.assign(n+1,0);
        dp.assign(n+1,0);
        ans.assign(n+1,0);
        for(int i=2;i<=n;i++){
            int x;
            cin>>x;
            adj[x].push_back(i);
        }
        depth[1]= 1;
        dfs(1);
        cout<<ans[1]<<'\n';
    }
}
