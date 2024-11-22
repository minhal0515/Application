#include "bits/stdc++.h"
 
#ifdef local
#include "custom/debugger.h"
#else
#define debug(...) 42;
#endif
 
using namespace std;
#define int long long
 
void solve([[maybe_unused]] int test) {
    int n,m;
    cin>>n;
    int x;
    vector <int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
        v[i]--;
    }
    string s;
    cin>>s;
    vector <int> ans(n);
    vector <int> b(n);
    for(int i=0;i<n;i++){
        int count = 0;
        int j=i;
        vector <int> path;
        if(b[i]){
            continue;
        }
        while(b[j]==0){
            b[j]=1;
            if(s[j]=='0'){
                count++;
            }
            path.push_back(j);
            j=v[j];
        }
        for(int u:path){
            ans[u]=count;
        }
    }
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<' ';
    }
    cout<<'\n';

}
 
int32_t main() {
    int t = 1;
    cin >> t;
    for (int tt = 1; tt <= t; tt++) {
        solve(tt);
    }
}