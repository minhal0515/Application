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
    int x = n*(n-1)/2;
    int max = 0,b[x];
    //vector <int> ans(n-1);
    for(int i=0;i<x;i++)
    {
        cin>>b[i];
    }
    sort(b,b+x);
    
    for(int i=0;i<x;i+=--n)
    {
        cout<<b[i]<<' ';
    }
    cout<<"1000000000\n";

}
 
int32_t main() {
    int t = 1;
    cin >> t;
    for (int tt = 1; tt <= t; tt++) {
        solve(tt);
    }
}