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
    cin>>n;
    int x;
    vector <int> ans;
    vector <int> vec;
    int sol;
    int count1 = 0;
    int count2 = 1;
    int k1=0;
    int k2 = n;
    int res = 0;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        vec.push_back(x);
    }
    for(int i=0;i<vec.size();i++)
    {
        if(vec[0]==vec[i])
            {
                k1 +=1;
                count1+=1;
            }
        else
        {
            break;
        }

    }
    for(int i=vec.size()-1;i>0;i--)
    {
        if(vec[vec.size()-1]==vec[i-1])
            {
                k2-=1;
                count2+=1;
            }
        else
        {
            break;
        }
    }
    //cout<<count2<<count1<<'\n';

    if(vec[0]==vec[n-1])
    {
        if((count2==count1) and (count2==n))
            {
                cout<<0<<'\n';
            }
        
        else if(k2!=k1)
        {
            cout<<abs(k2-k1)-1<<'\n';
        }
    }
    else
    {
        res = max(count1,count2);
        cout<<n-res<<'\n';
    }
}
 
int32_t main() {
    int t = 1;
    cin >> t;
    for (int tt = 1; tt <= t; tt++) {
        solve(tt);
    }
}