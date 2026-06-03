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
        int n,x,ss;
        cin>>n>>x>>ss;
        string s;
        cin>>s;
        int l=0;
        int r=0;
        int ans=0;
        for(char c:s){
            if(c=='A'){
                if(x*ss==ans){
                    continue;
                }
                ans++;
                if(ans>l*ss){
                    l++;
                }
                r=min(x,r+1);
            }
            else if(c=='I'){
                if(l==x){
                    continue;
                }
                ans++;
                l++;
                r=min(x,r+1);
            }
            else if(c=='E'){
                if(ans==r*ss){
                    continue;
                }
                ans++;
                if(ans>l*ss){
                    l++;
                }
            }

        }   
        cout<<ans<<'\n';     
    }
}