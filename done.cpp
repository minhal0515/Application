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
    cin>>n>>m;
    int count = -1;
    string x;
    string s;
    //bool flacko = false;
    cin>>x>>s;
    for(int i=0;i<7;i++)
    {
        size_t found = x.find(s);
        if(found !=string::npos)
        {
            count = i;
                break;
        }
        x = x+x;
        //n=n+n;    
        //count = count+1;
    }
    //cout<<x<<s;
    cout<<count<<'\n';
}
 
int32_t main() {
    int t = 1;
    cin >> t;
    for (int tt = 1; tt <= t; tt++) {
        solve(tt);
    }
}