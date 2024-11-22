#include "bits/stdc++.h"
 
#ifdef local
#include "custom/debugger.h"
#else
#define debug(...) 42;
#endif
 
using namespace std;
#define int long long
 
void solve([[maybe_unused]] int test) {
    string x;
    //for(int i=0;i<n;i++)
    
    cin >> x;
    
    bool flacko = false;
    bool asap = false;
    int p;
    for(int i=x.size()-1;i>=0;i--)
    {
        if(x[i]>='5' and i != 0)
        {
            x[i-1]++;
            asap = true;
            p=i;
        }
        else if(x[0]>='5')
        {
        //    cout<<'1';
            flacko = true;
        }
    }
    if (flacko == true)
    {
        for(int i=0;i<x.size();i++)
        {
            x[i]='0';
        }
        x.insert(0,1,'1');
    }
    else if(asap == true)
    {
        for(int i=p;i<x.size();i++)
        {
            x[i]='0';
        }
    }
    cout<<x<<"\n";

}
 
int32_t main() {
    int t = 1;
    cin >> t;
    for (int tt = 1; tt <= t; tt++) {
        solve(tt);
    }
}