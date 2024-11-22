#include "bits/stdc++.h"
 
#ifdef local
#include "custom/debugger.h"
#else
#define debug(...) 42;
#endif
 
using namespace std;
#define int long long
 
// void solve([[maybe_unused]] int test) {

// }
 
int32_t main() {
    int t = 1;
    cin >> t;
    for (int tt = 1; tt <= t; tt++) {
        int n;
        cin>>n;
        int x;
        int a;
        cin>>a;
        bool flacko = false;
        for(int i=0;i<n;i++)
        {
            cin>>x;
            if (x==a)
            {    
                flacko = true;
            }
        }
        if(flacko == true)
        {
            cout<<"YES"<<'\n';
        }
        else if(flacko == false)
        {
            cout<<"NO"<<'\n';
        }
    }
}