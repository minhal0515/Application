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
    scanf("%lld",&n);
    char m[n];
    char a;
    for(int i=0;i<n;i++)
    {
        cin>>m[i];
    }
    int j=0;
    for(int i=0;i<n;i++)
    {
        while(j<n)
        {
            j++;
            if(m[i]==m[j])
            {
                cout<<m[i]; 
                i=j+1;
                j=i+1;
                cout<<i<<j;
            }
        }
    }   

}
 
int32_t main() {
    int t = 1;
    cin >> t;
    for (int tt = 1; tt <= t; tt++) {
        solve(tt);
    }
}