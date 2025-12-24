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
    int k;
    cin>>n>>k;
    int count=0;
    int cnt = 0;
    vector <int> abel;
    vector <int> ans;
    for(int i=0;i<n;i++)
    {
        abel.push_back(i+1);
    }
    for(int i=0;i<n;i++)
    {
        count = k;
        cnt = n-k-2;
        while(count>0)
        {
            ans.push_back(abel[n-1-count]);
            count = count-1;
        }
        ans.push_back(abel[n-1]);
        while(cnt>0)
        {
            ans.push_back(abel[cnt]);
            cnt=cnt-1;
        }
        ans.push_back(abel[0]);
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