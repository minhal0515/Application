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
 
int32_t main() {
    int t = 1;
    cin >> t;
    for (int tt = 1; tt <= t; tt++) {
        int m;
        int mid;
        vector <int> x;
        for(int i=0;i<3;i++){
            cin>>m;
            x.push_back(m);
        }
        sort(x.begin(),x.end());
        int temp = x[1];
        int sum=0;
        for(int i=0;i<3;i++){
            sum+=abs(x[i]-temp);
        }
        cout<<sum<<'\n';

    }
}