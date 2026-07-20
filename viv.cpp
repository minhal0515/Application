#include "bits/stdc++.h"
 
#ifdef local
#include "custom/debugger.h"
#else
#define debug(...) 42;
#endif
 
using namespace std;
#define int long long
int gcd(int a,int b) {
    return (b==0)?a:gcd(b,a%b);
}
 
int32_t main() {
    int t = 1;
    cin >> t;
    for (int tt = 1; tt <= t; tt++) {
        int n;
        cin>>n;
        vector<int> a(n);
        vector<int> b(n);
        int s1=0;
        int s2=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            s1+=a[i];
        }
        for(int i=0;i<n;i++){
            cin>>b[i];
            s2+=b[i];
        }
        if(a==b){
            cout<<0<<'\n';
            continue;
        }
        int sum=0;
        for(int i=0;i<n;i++){
            if(a[i]!=b[i]){
                sum+=a[i];
            }
        }
        if(s1==0||s2==n){
            cout<<-1<<'\n';
            continue;
        }
        if(sum%2==1){
            cout<<1<<'\n';
        }
        else{
            cout<<2<<'\n';
        }
    }
}