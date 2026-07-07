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
    cin >> t;
    for (int tt = 1; tt <= t; tt++) {
        int n,k;
        cin>>n>>k;
        vector<int> a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        vector <int> v;
        int c=1;
        for(int i=1;i<n;i++){
            if(a[i]!=a[i-1]){
                v.push_back(c);
                c=1;
            } else{
                c++;
            }
        }
        v.push_back(c);
        sort(v.begin(),v.end());
        int m=v.size();
        int dih=0;
        int x=0;
        int ans=0;
        while(x<m){
            int l=v[x];
            int xx=l-1;
            int q=m-x;
            int cl=n-dih-xx*q;
            if(cl<=k && (k-cl)%q==0){
                ans++;
            }
            int y=x;
            while(y<m&&v[y]==l){
                y++;
            }
            dih+=(y-x)*v[x];
            x=y;
        }
        cout<<ans<<'\n';
    }
}