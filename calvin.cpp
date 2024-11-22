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
    int a;
    int e = 0;
    int o = 0;
    scanf("%lld",&n);
    vector<int> eve;
    vector<int> odd;
    for(int i=0;i<n;i++)
    {
        cin >> a;
        if(a%2 == 0)
        {
            eve.push_back(a);
        }
        else
        {
            odd.push_back(a);
        }
    }
    for(int i =0;i<odd.size();i++)
    {
        o=o+odd[i];
    }
    for(int i=0;i<eve.size();i++)
    {
        e = e+eve[i];
    }
    if (e>o)
    {
        cout<<"YES"<<'\n';
    }
    else
    {
        cout<<"NO"<<'\n';
    }
}
 
int32_t main() {
    int t = 1;
    cin >> t;
    for (int tt = 1; tt <= t; tt++) {
        solve(tt);
    }
}