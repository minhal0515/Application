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
    int a;
    int sum=0;
    vector <int> vec;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        vec.push_back(a);
    }
    for(int i=0;i<n;i++)
    {
        sort(vec.begin(),vec.end());
    }
    for(int i=0;i<n/2;i++)
    {
        sum = sum + vec[n-1-i]-vec[i];
    }
    cout<<sum<<"\n";

}
 
int32_t main() {
    int t = 1;
    cin >> t;
    for (int tt = 1; tt <= t; tt++) {
        solve(tt);
    }
}