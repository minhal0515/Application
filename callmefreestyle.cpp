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
int factorial(int n){
    int x=1;
    for(int i=2;i<=n;i++){
         x=(x*i)%1000000007;
    }
    return x;
}
int me(int base, int e, int m){
    int x=1;
    while(e>0){
        if(e%2==1){
            x=(x*base)%m;
        }
        base=(base*base)%m;
        e=e/2;
    }
    return x;
}
int mi(int n,int m){
    return me(n,m-2,m);
}
 
int32_t main() {
    int t = 1;
    //cin >> t;
    for (int tt = 1; tt <= t; tt++) {
        string s;
        cin>>s;
        vector<int> v(26,0);
        for(char c:s){
            v[c-'a']++;
        }
        int ans=factorial(s.size());
        for(int i=0;i<26;i++){
            if(v[i]>0){
                ans=(ans*mi(factorial(v[i]),1000000007))%1000000007;
            }
        }
        cout<<ans<<'\n';
    }
}