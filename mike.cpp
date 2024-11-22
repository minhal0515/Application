#include "bits/stdc++.h"
 
#ifdef local
#include "custom/debugger.h"
#else
#define debug(...) 42;
#endif
 
using namespace std;
#define int long long
 
void solve([[maybe_unused]] int test) 
    {
        int n;
        int a;
        int b;
        int c;
        // vector <int> mid(n);
        scanf("%lld", &n);
        for(int i = 0;i<n;i++)
        {
            cin>>a>>b>>c;
            if ((a < b && b < c) || (c < b && b < a))
            {    
                cout<<b<<"\n";
            }
    
            else if ((b < a && a < c) || (c < a && a < b))
            {    
                cout<<a<<"\n";
            }
 
            else
            {
                cout<<c<<"\n";
            }
        }

    }
 
int32_t main() {
    int t = 1;
    //cin >> t;
    for (int tt = 1; tt <= t; tt++) {
        solve(tt);
    }
}