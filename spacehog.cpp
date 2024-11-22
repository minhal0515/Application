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
    char x;
    vector <int> ans;
    vector <char> vec;
    int sol;
    int count = 0;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        vec.push_back(x);
    }
    for(int i=0;i<vec.size();i++)
    {
        if(vec[i]=='B')
        {    
            ans.push_back(i);
            count += 1;
        }
    }
    sol = ans[count-1]-ans[0]+1;
    cout<<sol<<'\n';
}
 
int32_t main() {
    int t = 1;
    cin >> t;
    for (int tt = 1; tt <= t; tt++) {
        solve(tt);
    }
}