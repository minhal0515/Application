#include "bits/stdc++.h"
 
#ifdef local
#include "custom/debugger.h"
#else
#define debug(...) 42;
#endif
 
using namespace std;
#define int long long
const int m=200005;
const int tmi=500000004;

int n;
vector<vector<int>> adj(m);
bool d[m];
int ans=0; 
void dfs(int p, int c){
    for(int i:adj[c]){
        if(i!=p){
            dfs(c,i);
            if(!d[i] && !d[c]){
                d[c]=d[i]=1;
                ans++;
            }
        }
    }
}
 
int32_t main() {
    int t = 1;
    //cin >> t;
    for (int tt = 1; tt <= t; tt++) {
        cin>>n;
        for(int i=0;i<n-1;i++){
            int a,b;
            cin>>a>>b;
            adj[a].push_back(b);
            adj[b].push_back(a);
        }  
        dfs(0,1);
        cout<<ans<<'\n';
    }
}