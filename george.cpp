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
    int x;
    int sum = 0;
    int ans = 0;
    cin>>n;
    map <int,int> side;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        ++side[x];
    }
    for(auto it : side)
    {
        int cnt = it.second;
        if(cnt>=3)
        {
            ans += cnt*(cnt-1)*(cnt-2)/6;
        }
        if(cnt>=2)
        {
            ans+=cnt*(cnt-1)/2*sum;
        }
        sum+=cnt;
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