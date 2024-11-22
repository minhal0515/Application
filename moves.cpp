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
    int x=0;
    int y=0;
    char m[n];
    bool flacko = true;
    for(int i=0;i<n;i++)
    {
        cin>>m[i];
    }
    for(int i=0;i<n;i++)
    {    
        if (m[i] == 'L')
        {
            x = x-1;
        }
        if(m[i] == 'R')
        {
            x = x+1;
        }
        if(m[i] == 'U')
        {
            y = y+1;
        }
        if(m[i] == 'D')
        {
            y=y-1;
        }
        if(x==1 and y==1)
        {
            flacko = true;
            break;
        }
        else
        {
            flacko = false;
        }
    }
    if (flacko == true)
    {
        cout<<"YES"<<"\n";
    }
    else
    {
        cout<<"NO"<<"\n";
    }

}
 
int32_t main() {
    int t = 1;
    cin >> t;
    for (int tt = 1; tt <= t; tt++) {
        solve(tt);
    }
}