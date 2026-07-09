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
        vector<int> v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        int con1=0;
        int con2=0;
        int c1=0;
        int c2=0;
        int c3=0;
        int x=INT_MAX;
        for(int i=0;i<n;i++){
            if(v[i]==1){
                c1++;
            } else if(v[i]==2){
                c2++;
            } else{
                c3++;
            }
            if(c1>=(c2+c3)){
                x=i;
                break;
            }
        }
        if(x>=n){
            cout<<"NO"<<'\n';
            continue;
        }
        while(v[x+1]==3 && c1>(c2+c3)){
            c3++;
//            cout<<c3<<c1;
            x++;
        }
        //cout<<x<<' ';
        //con1=1;
        c1=c2=c3=0;
        int y=INT_MAX;
        for(int i=x+1;i<n;i++){
            if(v[i]==1){
                c1++;
            } else if(v[i]==2){
                c2++;
            } else{
                c3++;
            }
            if((c1+c2)>=c3){
                y=i;
                break;
            }
        }
        //cout<<y;
        if(y>=n-1){
            cout<<"NO"<<'\n';
            continue;
        }
        cout<<"YES"<<'\n';
    }
}