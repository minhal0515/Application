#include "bits/stdc++.h"
 
#ifdef local
#include "custom/debugger.h"
#else
#define debug(...) 42;
#endif
 
using namespace std;
#define int long long
 
// void solve([[maybe_unused]] int test) {
//     int n;
//     scanf("%lld", &n);
//     for(int i=0;i<n;i++)

// }
 
int32_t main() {
    int t = 1;
    cin >> t;
    for (int tt = 1; tt <= t; tt++) {
        int n;
        cin>>n;
        int x=n;
        int a=0;
        int sol=0;
        char ans;
        vector <int> vec;
        for(int i=0;i<2;i++)
        {
            if(x>27)
            {
                x=x-26;
                a = 26;
                vec.push_back(a);
            }
            else if(x<=27)

            {
                x=x-1;
                a=1;
                vec.push_back(a);
            }
        }
        if(x!=0)
            {
            vec.push_back(x);
            }
        if (x==0)
        {
            vec.push_back(1);
        }
        sort(vec.begin(),vec.end());
        for(int i=0;i<vec.size();i++)
        {
            sol = vec[i];
            ans = 96 + char(sol);
            cout<<ans;
        }
        cout<<'\n';
    }
}