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
//     cin>>n;
//     int x;
//     int y;
//     for(int i=0;i<n;i++)
//     {
//         cin>>x;
//         cin>>y;
//     }

// }
 
int32_t main() {
    int t;
    int x;
    int y;
    cin >> t;
    for (int tt = 1; tt <= t; tt++) {
        cin>>x;
        cin>>y;
        int ans;
        int count=0;
        int rem;
        if(y%2!=0 and y>1)
        {
            count += (y/2 +1);
        }
        if(y%2==0)
        {
            count += y/2;
        }
        rem=(15*count)-y*4;
        if(x<=rem)
        {
            ans = count;
        }
        else
        {
            x = x-rem;
            if(x%15==0)
            {
                count+=x/15;
            }
            if(x%15!=0 and x>15)
            {
                count+=x/15+1;
            }
            if(x>0 and x<15)
            {
                count+=1;
            }
        }
        ans = count;
        cout<<ans<<'\n';
    }
}