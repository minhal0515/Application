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
    
// }
 
int32_t main() {
    int t = 1;
    cin >> t;
    for (int tt = 1; tt <= t; tt++) {
        int n,k,x,a;
        int min = 0;
        int max = 0;
        cin>>n>>k>>x;
        a = n-k+1;
        min = (k)*(2+(k-1));
        max = (k)*(2*a + (k-1));
        //cout<<min<<' '<<max<<' ';
        if(min/2<=x and max/2>=x)
        {
            cout<<"YES"<<'\n';
        }
        else
        {
            cout<<"NO"<<'\n';
        }
    }
}