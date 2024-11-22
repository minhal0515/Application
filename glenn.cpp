#include "bits/stdc++.h"
#include <iostream>
#include <set>
#include <deque>
#ifdef local
#include "custom/debugger.h"
#else
#define debug(...) 42;
#endif
 
using namespace std;
#define int long long
using ll = long long;

void solve([[maybe_unused]] int test) {
    
    int n,k;
    cin>>n>>k;
    int x;
    int s = 0;
    vector <int> v;
    for(int i=0;i<n;i++){
        cin>>x;
        v.push_back(x);
        s+=x;
    }
    if (k>=s){
        cout<<n<<'\n';
        return;
    }
    int e = k/2 + k%2;
    int o = k/2;
    int count = 0;
    for(int i=0;i<n;i++){
        if(v[i]>e){
            break;
        }
        count++;
        e-=v[i];
    }
    for(int i=n-1;i>0;i--){
        if(v[i]>o){
            break;
        }
        count++;
        o-=v[i];
    }
    cout<<count<<'\n';

}
 
int32_t main() {
    int t = 1;
    cin >> t;
    for (int tt = 1; tt <= t; tt++) {
        solve(tt);
    }
}