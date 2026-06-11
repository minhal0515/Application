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
        string s;
        cin>>s;
        int va=INT_MAX;
        string ans(n,'0'); 
        for (int i=0;i<=n;i++){
            string t=s;
            string a1(n,'0');
            int k1 = k;
 
            for (int j=0; j<i; j++){
                if (t[j]=='(' && k1 > 0){
                    a1[j] = '1';
                    t[j] = ')';
                    k1--;
                }
            }
            for (int j=n-1; j>i; j--){
                if (t[j] == ')' && k1 > 0){
                    a1[j]='1';
                    t[j] = '(';
                    k1--;
                }
            }
            int v = 0;
            int b = 0;
            for (int j=0; j<n; j++){
                if (b>0 && t[j]==')'){
                    v += 2;
                    b--;
                }
                else if (t[j]=='('){
                    b++;
                }
            }
            if (va>v){
                va=v;
                ans=a1;
            }
        } 
        cout<<ans<<'\n';
    }
}