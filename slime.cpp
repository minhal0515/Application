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
    int k = 1;
    int count = 0;
    int ans = 0;
    int min = 0;
    vector <int> a;
    scanf("%lld", &n);
    vector <int> d(n);
    vector <int> s(n);
    for(int i=0;i<n;i++)
    {
        cin>>d[i]>>s[i];
    }
    for(int i=0;i<d.size();i++)
    {
//         while(k<=s[i])
//         {
//             k = k+2;
//             count = count+1;
// //            cout<<count<<' ';
//         }
        if(s[i]%2==0)
        {
            ans = (s[i]-1)/2 + d[i];
        }
        if(s[i]%2!=0)
        {
            ans = s[i]/2+d[i];
        }
        a.push_back(ans);

    }
    sort(a.begin(),a.end());
    min = a[0];
    cout<<min<<'\n';
}
 
int32_t main() {
    int t = 1;
    cin >> t;
    for (int tt = 1; tt <= t; tt++) {
        solve(tt);
    }
}