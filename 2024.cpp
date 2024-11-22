#include "bits/stdc++.h"
 
#ifdef local
#include "custom/debugger.h"
#else
#define debug(...) 42;
#endif
 
using namespace std;
#define int long long
 
void solve([[maybe_unused]] int test) {
    // int n;
    // cin>>n;
    int l;
    cin>>l;
    int count=0;
    //int ans = 0;
    string s;
    vector <int> c(27);
    cin>>s;
    // for(int i=0;i<26;i++)
    // {
    //     c.push_back(i+1);
    //     //cout<<c[i];
    // }
    for(int i=0;i<l;i++)
    {
        c[s[i]-'A']++;
        if(c[s[i]-'A']==(s[i]-'A'+1))
        {
            count +=1;
        }
        //cout<<s[i]-'A'+1<<"   "<<c[i];  
    }
    cout<<count<<'\n';
}
 
int32_t main() {
    int t = 1;
    cin >> t;
    for (int tt = 1; tt <= t; tt++) {
        solve(tt);
    }
}