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
    scanf("%lld", &n);
    char a[n];
    bool flacko = true;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j=j+2)
        {
        //    cout<<a[j];
            if(a[i]!=a[j])
            {
                flacko = true;
            }
            else
            {
                flacko = false;
                break;
            }
        }
        if(flacko == false) 
        {
            break;
        }  
  }
    if (flacko == true)
    {
        cout<<"YES"<<'\n';
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