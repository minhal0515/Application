#include "bits/stdc++.h"
#ifdef local
#include "custom/debugger.h"
#else
#define debug(...) 42;
#endif

using namespace std;
#define int long long

void solve([[maybe_unused]] int test) {
    int n,k;
    cin>>n>>k;
    if(k==1){
        if(n%2 == 0){
            cout<<"YES"<<'\n';
        }
        else{
            cout<<"NO"<<'\n';
        }
        return;
    }
    int sum = 0;
    sum = (k*(k-1+2*(n-k+1)))/2;
    if(sum%2==0){
        cout<<"YEs"<<'\n';
    }
    else{
        cout<<"No"<<'\n';
    }
}

int32_t main() {
    int t;
    cin >> t;
    for (int tt = 1; tt <= t; tt++) {
        solve(tt);
    }
}
