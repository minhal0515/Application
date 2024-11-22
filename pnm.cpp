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
    scanf("%lld", &n);
    char s[n];
    char t[n];
    char u[n];
    int a=0;
    for(int i=0;i<n;i++)
    {
        cin>>s[i];  
    }
    for(int i=0;i<n;i++)
    {
        cin>>t[i];
    }
    for(int i=0;i<n;i++)
    {
        cin>>u[i];
    }
    for(int i=0;i<n;i++)
    {
        if(s[0]<t[0])
        {
            a = t[0]-s[0];
        }
        else
        {
            a = 26 - s[0]+t[0];
        }
        if(u[i] + a<123)
        {
            cout<<char(u[i]+a);
        }
        else
        {
            cout<<char(u[i]+a-26);
        }

        
    }
    cout<<"\n";

}
 
int32_t main() {
    int t = 1;
    cin >> t;
    for (int tt = 1; tt <= t; tt++) {
        solve(tt);
    }
}
//abcdefghijklmnopqrstuvwxyz