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
        scanf("%lld",&n);
        int a;
        int max=0;
        int maxtwo = 0;
        vector <int> vec;
        for(int i=0;i<n;i++)
        {
            cin>>a;
            vec.push_back(a);
        }
        for(int i=0;i<vec.size();i++)
        {
            if(vec[i]>max)
            {
                maxtwo=max;
                max=vec[i];
            }
            else if(vec[i]>maxtwo)
            {
                
                maxtwo = vec[i];   
            }
        }
    
        for(int i=0;i<vec.size();i++)
        {
            if(vec[i]!=max)
            {
                cout<<vec[i]-max<<" ";
            }
            
            else 
            {
                cout<<vec[i]-maxtwo<<" ";
            }
        }
        cout<<"\n";
        
    }
 
int32_t main() {
    int t = 1;
    cin >> t;
    for (int tt = 1; tt <= t; tt++) {
        solve(tt);
    }
}