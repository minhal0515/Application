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
    char x;
    vector <int> a;
    vector<int>::iterator it;
    //cin>>x;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        a.push_back(x);
    }
    //cout<<a[0];
    //cout<<a.size()-1;
    while(a.size()!=0)
    {
        if (a[0] == '1' and a[a.size()-1] == '0')
        {
            a.erase(a.begin());
            it = a.end();
            it--;
            a.erase(it);
        }
        else if(a[0] == '0' and a[a.size()-1] == '1')
        {
            a.erase(a.begin());
            it = a.end();
            it--;
            a.erase(it);
        }
        else
        {
            break;
        }
        
    }
    cout<<a.size()<<"\n";
}
 
int32_t main() {
    int t = 1;
    cin >> t;
    for (int tt = 1; tt <= t; tt++) {
        solve(tt);
    }
}