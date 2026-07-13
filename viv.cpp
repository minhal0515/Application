#include "bits/stdc++.h"
 
#ifdef local
#include "custom/debugger.h"
#else
#define debug(...) 42;
#endif
 
using namespace std;
#define int long long
 
int32_t main() {
    int t = 1;
    //cin >> t;
    for (int tt = 1; tt <= t; tt++) {
        int n;
        long long x;
        cin>>n>>x;
        vector<int> v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        vector<long long> l;
        vector<long long> r;
        int mid=n/2;
        for(int i=0;i<(1<<mid);i++){
            long long s=0;
            for(int j=0;j<mid;j++){
                if(i&(1<<j)){
                    s+=v[j];
                }
            }
            l.push_back(s);
        }
        int rr=n-mid;
        for(int i=0;i<(1<<rr);i++){
            long long s=0;
            for(int j=0;j<rr;j++){
                if(i&(1<<j)){
                    s+=v[mid+j];
                }
            }
            r.push_back(s);
        }
        long long c=0;
        sort(l.begin(),l.end());
        sort(r.begin(),r.end());
        for(int i:l){
            auto li=lower_bound(r.begin(),r.end(),x-i);
            auto hi=upper_bound(r.begin(),r.end(),x-i);
            c+=hi-li;   
        }
        cout<<c<<'\n';

    }
}