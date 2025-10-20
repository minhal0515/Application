#include "bits/stdc++.h"
 
#ifdef local
#include "custom/debugger.h"
#else
#define debug(...) 42;
#endif
 
using namespace std;
#define int long long
 
void solve([[maybe_unused]] int test) {
   int n;
    cin>>n;
    vector <int> v;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    if(n%2==0){
        v.push_back(0);
        n=n+1;
    }
    int ans = 0;
    for(int i=0;i<n-2;i+=2){
        int sum = v[i]+v[i+2];
        //cout<<v[i];
            if(v[i]>v[i+1]){
                //int c = v[i+1];
                sum=sum-abs(v[i+1]-v[i]);
                ans+=abs(v[i+1]-v[i]);
                v[i] -= abs(v[i+1]-v[i]);


            }
            if(v[i+2]>v[i+1]){
              //  sum=sum-5;
                sum=sum-abs(v[i+1]-v[i+2]);
                ans+=abs(v[i+1]-v[i+2]);
                v[i+2] -= abs(v[i+1]-v[i+2]);

                //cout<<abs(v[i+1]-v[i+2]);
                //cout<<"cheeks"<<i;

            }
            //cout<<sum;
            if(sum>v[i+1]){
                //cout<<"poompoom"<<i;
                int c = abs(v[i+1]-v[i]);
                int d= abs(v[i+2]-c);
                v[i+2]-=d;
                ans+=d;
            }

        
    }
    cout<<ans<<'\n';
}
 
int32_t main() {
    int t = 1;
    cin >> t;
    for (int tt = 1; tt <= t; tt++) {
        solve(tt);
    }
}