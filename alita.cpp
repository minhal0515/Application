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
    char m[n];
    int max=0;
    for(int i=0;i<n;i++)
    {
        cin>>m[i];
    }
    for(int i=0;i<n;i++)
    {
        if (m[i]>max)
        {
            max = m[i];
        }
        else
        {
            m[i] = max;
        }
    }
    cout<<max-96;
    
}
 
int32_t main() {
    int t = 1;
    cin >> t;
    for (int tt = 1; tt <= t; tt++) {
        solve(tt);
    }
}