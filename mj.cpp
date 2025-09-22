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
    cin>>n>>m;
    cin.ignore();
    vector<int> ans(m);
    vector<vector<int>> v(n);
    for(int i=0;i<n;i++){
        int m1;
        cin>>m1;
        v[i].resize(m1);
        for(int j=0;j<m1;j++){
            cin>>v[i][j];
        }
    }
    if(n==2){
        int f=0;
        for(int i=0;i<n;i++){
            for(int u:v[i]){
                ans[u-1]++;
                //cout<<ans[u]<<' ';
            }
        }
        for(int i=0;i<ans.size();i++){
            if(ans[i]<2){
                f=1;
                break;
            }
        }
        if(f==1){
            cout<<"NO"<<'\n';
        } else{
            cout<<"YES"<<'\n';
        }
    }
    else{
        int f=0;
        for(int i=0;i<n;i++){
            for(int u:v[i]){
                ans[u-1]++;
            }
        }
        for(int i=0;i<ans.size();i++){
            if(ans[i]==0){
                cout<<"NO"<<'\n';
                return;
            }
        }
        int c=0;
        for(int i=0;i<n;i++){
            int ff=0;
            for (int p:v[i]){
                if(ans[p-1]==1 && ff==0){
                    ff=1;
                    //cout<<p<<' ';
                    c++;
                }
            }
        }
//        cout<<n<<' '<<c<<' ';
        if(n-c<2){

            f=1;
        }
        if(f==0){
            cout<<"YES"<<'\n';
        } else{
            cout<<"NO"<<'\n';
        }
    }
    
}
 
int32_t main() {
    int t = 1;
    cin >> t;
    for (int tt = 1; tt <= t; tt++) {
        solve(tt);
    }
}