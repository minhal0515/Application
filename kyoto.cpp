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
//     vector<string> a(2 * n - 2);
//     vector<string> suff;
//     for (int i = 0; i < 2 * n - 2; i++) {
//         cin >> a[i];
//         if ((int)a[i].size() == n - 1) {
//             suff.push_back(a[i]);
//         }
//     }
//     reverse(suff[0].begin(), suff[0].end());
//     suff[0] == suff[1] ? printf("YES\n") : printf("NO\n");
// }
 
int32_t main() {
    int t = 1;
    cin >> t; 
    for (int tt = 1; tt <= t; tt++) {
        string s;
        int c = 1;
        int ans = 0;
        cin>>s;
        for(int i=0;i<4;i++)
        {
            int m = s[i]-'0';
            if(m!=0 and m>c)
            {
                ans+=m-c;
                c=m;
            }
            else if(m!=0 and m<c)
            {
                ans+=c-m;
                c=m;
            }
            else if(m==c)
            {
                c=m;
            }
            else if(m==0)
            {
                ans += 10-c;
                c=10;
            }
            ans+=1;  
        }
        cout<<ans<<'\n';
    }
}