#include "bits/stdc++.h"
 
#ifdef local
#include "custom/debugger.h"
#else
#define debug(...) 42;
#endif
 
using namespace std;
#define int long long
 
void solve([[maybe_unused]] int test) {
    int n,m,q;
    cin>>n>>m>>q;
    vector <int> b(m);
    for(int i=0;i<m;i++){
        cin>>b[i];
    }
    sort(b.begin(),b.end());
    for(int i=1;i<=q;i++){
        int a;
        cin>>a;
        int k = upper_bound(b.begin(), b.end(), a)-b.begin();
        if(k==0){
            cout<<b[0]-1<<'\n';
        }
        else if(k==m){
            cout<<n-b[m-1]<<'\n';
        }
        else{
            cout<<(b[k]-b[k-1])/2<<'\n';
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