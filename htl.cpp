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
    int a=2023;
    int x;
    int ans;
    bool flacko = true;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        if(a%x==0)
        {
            //flacko = true;
            a = a/x;
        }
        else
        {
            flacko = false;
        }
    }
    if (flacko==false)
    {
        cout<<"nO";
    }
    if(flacko ==true)
    {
        cout<<"yES"<<'\n';
        cout<<a<<' ';
        for(int i=0;i<k-1;i++)
        {
            cout<<1<<' ';
        }
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