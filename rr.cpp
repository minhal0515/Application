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
        int a,b,x;
        cin>>a>>b>>x;
        vector <int> a1;
        vector<int> b1;
        int xx=a;
        while(xx>0){

            a1.push_back(xx);
            xx=xx/x;
        }
        a1.push_back(0);
        int yy=b;
        while(yy>0){
            //yy=yy/x;
            b1.push_back(yy);
            yy=yy/x;
        }
        b1.push_back(0);
        int ans=INT_MAX;
        for(int i=0;i<a1.size();i++){
            for(int j=0;j<b1.size();j++){
                int c=i+j+abs(a1[i]-b1[j]);
                if(c<ans){
                    ans=c;
                }
            }
        }
        cout<<ans<<'\n';
    }
}