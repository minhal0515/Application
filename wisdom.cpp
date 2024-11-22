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
    int max = 0;
    int ans = 0;
    int a;
    vector <int> ai;
    int b;
    vector <int> bi;
    scanf("%lld",&n);
    for(int i=0;i<n;i++)
    {
        cin>>a>>b;
        ai.push_back(b);
        if(a<11)
        {
            bi.push_back(b);
        }
    }
    
    for(int i=0;i<(int)bi.size();i++)
    {
        if(bi[i]>max)
        {   
            max = bi[i];
        }
        else
        {
            bi[i] = max;
        }
    }
    for(int i=0;i<(int)ai.size();i++)
    {
     if(ai[i]==max)
     {
         ans = i+1;
         break;
     }
    }
    //cout<<max<<"\n";
     cout<<ans<<"\n";

}
 
int32_t main() {
    int t = 1;
    cin >> t;
    for (int tt = 1; tt <= t; tt++) {
        solve(tt);
    }
}