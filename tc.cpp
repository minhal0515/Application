#include "bits/stdc++.h"
 
#ifdef local
#include "custom/debugger.h"
#else
#define debug(...) 42;
#endif
 
using namespace std;
#define int long long
 
void solve([[maybe_unused]] int test) {
    int a;
    int x=0;
    vector <int> vec;
    bool flacko=false;
    for(int i=0;i<3;i++)
    {
        cin>>a;
        vec.push_back(a);
    }
    for(int i=0;i<vec.size();i++)
    {
        for(int j=i+1;j<vec.size();j++)
        {
            if ((vec[i]+vec[j])>9)
            {
                flacko = true;
            }
        }
    }
    if(flacko==true)
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