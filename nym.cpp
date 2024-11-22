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
    scanf("%lld", &n);
    vector <int> b(n);
    vector <int> a;
    int x=0;
    for(int i=0;i<n;i++)
    {
        cin>>b[i];
    }
    a.push_back(b[0]);
    for(int i=0;i<b.size()-1;i++)
    {
        a.push_back(b[i+1]);
        if(b[i]>b[i+1])
        {
            a.push_back(b[i+1]);
        }
    }
    cout<<a.size()<<'\n';
    for(int i=0;i<a.size();i++)
    {
        cout<<a[i]<<' ';
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