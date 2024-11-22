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
    int f;
    int k;
    cin>>f;
    cin>>k;
    int flacko=0;
    vector <int> v;
    int t;
    int x;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        v.push_back(x);
    }
    t=v[f-1];
    for(int i=0;i<v.size();i++)
    {
        if(v[i]==t)
            flacko+=1;
    }
    sort(v.begin(),v.end());
    int count = 0;
    int sz = v.size();
    for(int i=0; i<k; i++)
        {
            int y = sz - 1 - i;
            if(v[y]==t)
                count+=1;
        }
    if(count==flacko or k>=v.size())
        {
        cout<<"YES"<<'\n';
        }
    if(count<flacko and count>0 and k<v.size())
        {
        cout<<"MAYBE"<<'\n';
        }
    if(count==0)
        {
        cout<<"NO"<<'\n';
        }

}
 
int32_t main() {
    int t = 1;
    cin >> t;
    for (int tt = 1; tt <= t; tt++) {
        solve(tt);
    }
}