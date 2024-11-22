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
        vector <char> vec(3);
        for(int i=0;i<3;i++)
        {
            if(x>26)
            {
                x=x-26;
                a = 26;
                vec.push_back(char(a));
            }
            if(x<=26)

            {
                x=x-1;
                a=1;
                vec.push_back(char(a));
            }
            vec.push_back(char(x));
        }
        for(int i=0;i<vec.size();i++)
        {
            cout<<vec[i];
        }
        cout<<'\n';
    }
}