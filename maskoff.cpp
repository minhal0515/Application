#include "bits/stdc++.h"
#ifdef local
#include "custom/debugger.h"
#else
#define debug(...) 42;
#define ll long long
#endif
 
using namespace std;
#define int long long
 
void solve([[maybe_unused]] int test) {
    int n;
    cin>>n;
    string a;
    string b;
    cin>>a>>b;
    a.push_back('0');
    b.push_back('0');
    int cnt=0;
    for(int i = 0; i < n; i++){
        cnt += (a[i] == '1') - (a[i] == '0');
        if((a[i] == b[i]) != (a[i + 1] == b[i + 1]) && cnt != 0) {
            cout << "NO"<<'\n';
            return;
        }
    }
    cout << "YES"<<'\n';
}
 
int32_t main() {
    int t;
    cin >> t;
    for (int tt = 1; tt <= t; tt++) {
        solve(tt);
    }
}