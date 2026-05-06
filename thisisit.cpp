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
        int n;
        cin>>n;
        vector <int> v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        sort(v.begin(),v.end());
        int m=0;
        int x=0;
        for(int i=0;i<n;i++){
            if(v[i]==m){
                m++;
                x=i;
            } 
        }
        int sum;
        if(m==0){
            sum=v[n-1];
        }else{
            sum=1;
        }
        int c=2;
        while(c<=m){
            sum+=(c+c-1);
            c++;
        }
        int u=((n-1)*(v[n-1]+m))+v[n-1];
        sum+=(n-x-1)*(v[n-1]+m);
        sum=max(sum,u);
        cout<<sum<<'\n';
    }
}