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
    vector <int> c(n);
    int count =0;
    int l = 0;
    int r=0;
    bool flacko = false;
    int kr =0;
    int kl=0;
    int ri;
    int rj;
    for(int i=0;i<n;i++)
    {
        cin>>c[i];
    }
    // for(int i=0;i<n;i++)
    // {
    //     if (c[0]==c[n-1])
    //     {
    //         b=true;
    //     }
    //     else
    //     {
    //         b=false;
    //     }
    // }
    //if(b == true)
    
    for(int i=0;i<c.size();i++)
    {       
        if (c[i]==c[0])
        {
            kl = n/2;
            kr = k-kl;
        }
    }          
        
    
    //else if(b== false)
    
    for(int i=0;i<n;i++)
    {
        if(c[i]==c[0])
        {
             l=l+1;
        }
        if(l==k)
        {
            ri = i-1;
        }
    }
    for(int i=n;i>0;i--)
    {
        if(c[i]==c[n])
        {
            r=r+1;
        }
        if(r==k)
        {
            rj=i+1;
        }
    }
    
    // if(count == k-2)
    // {
    //     flacko = true;
    // }
    if(ri<rj)
    {
        flacko=true;
    }
    else
    {
        flacko = false;
    }
    
    if(flacko == true)
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