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
    int m;
    int k;
    int H;
    int x=0;
    int count = 0;
    //vector <int> diff[n];
    cin>>n>>m>>k>>H;
    vector <int> h(n);
    for(int i=0;i<n;i++)
    {
        cin>>h[i];
    }
    for(int i=1;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(k*i==abs(H-h[j]))
            {
                count=count+1;
            }
        }
    }
    cout<<count<<"\n";
}
 
int32_t main() {
    int t = 1;
    cin >> t;
    for (int tt = 1; tt <= t; tt++) {
        solve(tt);
    }
}