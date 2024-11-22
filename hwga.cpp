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
    string str;
    cin>>str;
    set<string>s;
    for(int i=0;i<n-1;i++)
    {
        string a="";
        a+=str[i];
        a+=str[i+1];
        s.insert(a);
    }
    cout<<s.size()<<'\n';
}
 
int32_t main() {
    int t = 1;
    cin >> t;
    for (int tt = 1; tt <= t; tt++) {
        solve(tt);
    }
}