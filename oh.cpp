#include "bits/stdc++.h"
 
#ifdef local
#include "custom/debugger.h"
#else
#define debug(...) 42;
#endif
 
using namespace std;
#define int long long
 
void solve([[maybe_unused]] int test) {
    int n,m;
    cin>>n>>m;
    int x;
    vector <int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
        //v.push_back(x);
    }
    int a = 0;
    sort(v.begin(),v.end());
    for(int i=0;i<n;){
        int j=i;
        while(v[j]==v[i]){
            j++;
        }
        int l=j;
        while(v[i]+1==v[l]){
            l++;
        }
        for(int c=0;c<=j-i;c++){
            if(c*v[i]>m){
                continue;
            }
            int k1 = c*v[i];
            int k2 = min(l-j,(m-k1)/(v[i]+1));
            k1+=k2*(v[i]+1);
            a=max(k1,a);
        }
        i=j;
    }
    cout<<a<<'\n';
    
 
}
 
int32_t main() {
    int t = 1;
    cin >> t;
    for (int tt = 1; tt <= t; tt++) {
        solve(tt);
    }
}
