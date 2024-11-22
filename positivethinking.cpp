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
    scanf("%lld", &n);
    vector <int> vec(n);
    int v;
    for(int i=0;i<n;i++)
    {
        scanf("%11d", &vec[i]);
    }
    string ans;
    vector <int> a(26,0);
    for(int i=0;i<n;i++){
        int x=0;
        for(int j=0;j<n;j++){
            if (a[j]==vec[i]){
            x=j;
            break;
        }
    }
    ans+= 97 + char(x);
    a[x]++;
    }
    cout<<ans<<'\n';

}
 
int32_t main() {
    int t = 1;
    cin >> t;
    for (int tt = 1; tt <= t; tt++) {
        solve(tt);
    }
}