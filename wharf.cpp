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
    scanf("%lld",&n);
    vector <int> a(n);
    vector <int> vex;
    int inc =0;
    int dec=0;
    bool flacko = true;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    if(n==1 or n==2)
    {
        cout<<"YES"<<"\n";
        return;
    }
    for(int i=0;i<a.size();i++)
    {

        if(i==0)
        {
            vex.push_back(a[i]);
        }
        else{
            if(a[i]!= a[i-1])
            {
                vex.push_back(a[i]);
            }   
        }
    }
    //  for(int i=0;i<vex.size();i++)
    //  {
    //      cout<<vex[i] << " \n"[i == vex.size() - 1];
    // }
    for(int i=0;i<vex.size();i++)
    {
        if((i == 0 || vex[i-1] > vex[i]) && (i == vex.size()-1 || vex[i] < vex[i+1]))
        {
            inc++;
        }

       // cout<<"i:"<<i<<" inc:"<<inc<<"\n";
    }
    //cout << inc << "\n";
    if(inc==1)
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