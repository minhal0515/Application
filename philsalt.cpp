#include "bits/stdc++.h"
 
#ifdef local
#include "custom/debugger.h"
#else
#define debug(...) 42;
#endif
 
using namespace std;
#define int long long

 
int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1;
    //cin >> t;
    for (int tt = 1; tt <= t; tt++) {
        int x,n;
        cin>>x>>n;
        set<int> s1{0,x};
        multiset<int> s2{x};
        for(int i=0;i<n;i++){
            int p;
            cin>>p;
            auto it1 = s1.upper_bound(p);
            auto it2 = it1;
            it2--;
            s2.erase(s2.find(*it1-*it2));
            s2.insert(*it1-p);
            s2.insert(p-*it2);
            s1.insert(p);
            auto a=s2.end();
            a--;
            cout<<*a<<' ';
        }
    }
}