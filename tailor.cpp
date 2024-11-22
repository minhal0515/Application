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
    char x;
    vector <char> v;
    int y = 4*n;
    for(int i=0;i<y;i++){
        cin>>x;
        v.push_back(x);
    }
    int count = 4;
    vector <int> ans;
    int c = 4;
    for(int i=y-1;i>=0;i--){
        if(v[i]=='#'){
            ans.push_back(c);
        }
        c--;
        if(c==0){
            c=4;
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