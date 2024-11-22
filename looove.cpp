#include "bits/stdc++.h"
 
#ifdef local
#include "custom/debugger.h"
#else
#define debug(...) 42;
#endif
 
using namespace std;
#define int long long
 
// void solve([[maybe_unused]] int test) {
    
    
// }
 
int32_t main() {
    int t = 1;
    cin >> t;
    for (int tt = 1; tt <= t; tt++) {
        vector <int> vec;
        int a,b,c;
        cin>>a>>b>>c;
        vec.push_back(a);
        vec.push_back(b);
        vec.push_back(c);
        sort(vec.begin(),vec.end());
        if(vec[0]==vec[1] and vec[1]==vec[2])
            {
            cout<<"YES"<<'\n';
            }
        else if(vec[1]%vec[0]==0 and vec[2]%vec[0]==0 and vec[2]/vec[0]-1 + vec[1]/vec[0]-1 <=3)
                {
                cout<<"YES"<<'\n';
                }
        else
            {
            cout<<"NO"<<'\n';
            }
        }
}