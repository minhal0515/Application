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
    int count = 0;
    cin>>n;
    char a;
    char b;
    char c;
    vector <char> av;
    vector <char> bv;
    vector <char> cv;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        av.push_back(a);
    }
    for(int i=0;i<n;i++)
    {
        cin>>b;
        bv.push_back(b);
    }
    for(int i=0;i<n;i++)
    {
        cin>>c;
        cv.push_back(c);
    }
    for(int i=0;i<n;i++)
    {
        if (cv[i]==av[i] or cv[i]==bv[i])
        {
            count = count+1;
        }
    }
    if(count == n)
    {
        cout<<"NO"<<'\n';
    }
    if(count!=n)
    {
        cout<<"YES"<<'\n';
    }
}
 
int32_t main() {
    int t = 1;
    cin >> t;
    for (int tt = 1; tt <= t; tt++) {
        solve(tt);
    }
}