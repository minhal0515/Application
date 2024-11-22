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
    char b;
    int count1 = 0;
    int count2 = 0;
    for(int i=0;i<n;i++)
    {
        cin>>b;
        if(b=='+')
        {
            count1 +=1;
        }
        if(b=='-')
        {
            count2+=1;
        }
    }
    cout<<abs(count1-count2)<<'\n';
}
 
int32_t main() {
    int t = 1;
    cin >> t;
    for (int tt = 1; tt <= t; tt++) {
        solve(tt);
    }
}