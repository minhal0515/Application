#include "bits/stdc++.h"
#include <iostream>
#include <set>
#ifdef local
#include "custom/debugger.h"
#else
#define debug(...) 42;
#endif
 
using namespace std;
#define int long long
 
// void solve([[maybe_unused]] int test) {
 
// }
 
int32_t main() {
    int t = 1;
    cin >> t;
    for (int tt = 1; tt <= t; tt++) {
        int n;
        cin>>n;
        vector <char> v;
        char x;
        for(int i=0;i<n;i++){
            cin>>x;
            v.push_back(x);
        }
        v[0]='(';
        int co = 0;
        int cc = 0;
        for(int i=0;i<v.size();i++){
            if(v[i]=='('){
                co++;
            }
            else if(v[i]==')'){
                cc++;
            }
            if(co>cc and i%2==0 and i!=0){
                v[i]=')';
                cc++;
            }
            else if(cc>=co and i%2==0 and i!=0){
                v[i]='(';
                co++;
            }
        }
        int ans = 0;
        vector <int> o;
        vector <int> c;
        for(int i=0;i<v.size();i++){
            //cout<<v[i];
            if(v[i]=='('){
                o.push_back(i);
            }
            else if(v[i]==')'){
                c.push_back(i);
            }
            // if(o>c and v[i]==')'){
            //     ans+=o;
            // }
            // if(o==c){
            //     ans+=o;
            //     o=0;
            //     c=0;
            // }
            //cout<<co<<' '<<cc;
        }
        for(int i=0;i<n/2;i++){
            ans+=c[i]-o[i];
        }
        cout<<ans<<'\n';
        
    }
}