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
    set<char> s;
    vector<char> r;
    vector<char> vec;
    char x;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        s.insert(x);
        vec.push_back(x);
    }
    // for (auto& str : s)
    // {
    //     cout<<str;
    // }
    for(auto& it : s)
    {
        r.push_back(it);
    }
    for(int i=0;i<vec.size();i++)
    {
        for(int j=0;j<r.size();j++)
        {
            if(vec[i]==r[j])
            {   
                //cout<<"y"<<'\n';
                vec[i]=r[r.size()-(j+1)];
                break;
            }
        }
    }
    for(int i=0;i<vec.size();i++)
    {
        cout<<vec[i];
    }
    cout<<'\n';

}
 
int32_t main() {
    int t = 1;
    cin >> t;
    for (int tt = 1; tt <= t; tt++) {
        solve(tt);
    }
}