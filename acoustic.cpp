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
    int count = 0;
    int s = n*k;
    char x = 'a';
    while(count<s)
    {
        for(int i=0;i<k;i++)
        {
            cout<<x;
            x+=1;
            count=count+1;
        }
        x='a';
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