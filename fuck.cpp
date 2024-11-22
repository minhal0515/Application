#include "bits/stdc++.h"
 
#ifdef local
#include "custom/debugger.h"
#else
#define debug(...) 42;
#endif
 
using namespace std;
#define int long long
 
void solve([[maybe_unused]] int test) {
    int n;
    cin>>n;
    vector <int> v;
    int x;
    for(int i=0;i<n;i++){
        cin>>x;
        v.push_back(x);
    }
    sort(v.begin(),v.end());
    int l;
    if(v.size()%2==0){
        l=v.size()/2;
        l--;
    }
    else{
        l=v.size()/2;
    }
    int y=v.size()-1;
    int ans = v[y];
    while(l>0){
        y--;
        ans=v[y];
        l--;
    }
    cout<<ans<<'\n';

}
 
int32_t main() {
    int t = 1;
    cin >> t;
    for (int tt = 1; tt <= t; tt++) {
        solve(tt);
    }
}