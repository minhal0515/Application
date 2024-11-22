#include "bits/stdc++.h"
 
#ifdef local
#include "custom/debugger.h"
#else
#define debug(...) 42;
#endif
 
using namespace std;
#define int long long
 
void solve([[maybe_unused]] int test) {
    int n,m,k;
    cin>>n>>m>>k;
    int x;
    vector <int> a;
    int sum = 0;
    int w;
    cin>>w;
    for(int i =0 ;i<w;i++){
        cin>>x;
        a.push_back(x);
    }
    sort(a.begin(),a.end());
    vector <int> v;
    for(int i=0;i<n;i++){
        int lbx=0;
        int ubx = 0;
        int lby = 0;
        int uby = 0;
        for(int j=0;j<m;j++){
            lbx = max(0LL,i-k+1);
            ubx = min(n-k,i);
            lby = max(0LL,j-k+1);
            uby = min(m-k,j);
            int val = (ubx-lbx + 1)*(uby-lby +1);
            v.push_back(val);
        }
    }
    sort(v.begin(),v.end());

    int t = a.size()-1;
    int y = v.size()-1;
    while(t>=0){
        sum+=a[t]*v[y];
        t--;
        y--;
    }
    cout<<sum<<'\n';

}
 
int32_t main() {
    int t = 1;
    cin >> t;
    for (int tt = 1; tt <= t; tt++) {
        solve(tt);
    }
}