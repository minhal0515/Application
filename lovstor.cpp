#include "bits/stdc++.h"
 
#ifdef local
#include "custom/debugger.h"
#else
#define debug(...) 42;
#endif
 
using namespace std;
#define int long long
 
void solve([[maybe_unused]] int test) {
    int count = 0;
    char s[10] = {'c','o','d','e','f','o','r','c','e','s'};
    string a;
    int n;
    scanf("%lld",&n);
    for (int i = 0; i<n; i++)
    {
        getline(cin,a);
        size_t found = a.find(s[i]);
        if(found!=string::npos)
        {
            cout<<"YES"<<"\n";
        } 
        else
        {
            cout<<"NO"<<"\n";
        }
    }
    //cout << count <<'\n';

}
 
int32_t main() {
    int t = 1;
    //cin >> t;
    for (int tt = 1; tt <= t; tt++) {
        solve(tt);
    }
}