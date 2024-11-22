#include "bits/stdc++.h"
#include <iostream>
#include <set>
#ifdef local
#include "custom/debugger.h"
#else
#define debug(...) 42;
#endif
 
using namespace std;
#define int long long
 
// void solve([[maybe_unused]] int test) {
 
// }
inline int get_digits(int n){
    int count = 0;
    while(n){
        count++;
        n=n/3;
    }
    return count;
}

const int N = 2e5 + 20;
int cnt[N];
int pref[N]; 

int32_t main() {
    for(int i=0;i<N-1;i++){
        cnt[i]= get_digits(i);
        pref[i+1] = pref[i] + cnt[i]; 
    }
    int t = 1;
    cin >> t;
    for (int tt = 1; tt <= t; tt++) {
        int l,r;
        cin>>l>>r;
        r++;
        int ans = 0;
        ans = pref[r]-pref[l]+cnt[l];
        cout<<ans<<'\n';
    }
}