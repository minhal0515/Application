#include "bits/stdc++.h"
#ifdef local
#include "custom/debugger.h"
#else
#define debug(...) 42;
#define ll long long
#endif

using namespace std;
#define int long long

void solve([[maybe_unused]] int test) {
    int n,x;
    cin>>n>>x;
    vector <int>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    map<ll,ll>mp, mp1;
    for(auto it: a){
        mp1[it]++;
    }
    int ans = 0;
    while(true){
        if(mp1[ans]>0){
            mp1[ans]--;
            int f = mp1[ans];
            mp[ans%x]+=f;
            ans++;
        }
        else if(mp[ans%x]>0){
            mp[ans%x]--;
            ans++;
        }
        else{
            break;
        }
    }
    cout<<ans<<'\n';

}

int32_t main() {
    int t;
    cin >> t;
    for (int tt = 1; tt <= t; tt++) {
        solve(tt);
    }
}
