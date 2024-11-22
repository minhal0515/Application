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
    int b;
    int as=0;
    int bs=0;
    vector<int> al;
    vector<int> bob;
    for(int i=0;i<3;i++)
    {
        cin>>a;
        al.push_back(a);
        sort(al.begin(),al.end());
    }
    for(int i=0;i<3;i++)
    {
        cin>>b;
        bob.push_back(b);
        sort(bob.begin(),bob.end());
    }
    for(int i=1;i<3;i++)
    {
        as = as+al[i];
        bs=bs+bob[i];
    }
    if (bs>as)
    {
        cout<<"BOB"<<"\n";
    }
    if(as>bs)
    {
        cout<<"ALICE"<<"\n";
    }
    if(as==bs)
    {
        cout<<"TIE"<<"\n";
    }
}
 
int32_t main() {
    int t = 1;
    cin >> t;
    for (int tt = 1; tt <= t; tt++) {
        solve(tt);
    }
}