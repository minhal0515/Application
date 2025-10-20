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
        string s;
        cin>>s;
        vector <char>v;
        int f = 0;
        for(int i=1;i<s.size();i++){
            if(s[i]=='0' && f==0){
                f=1;
                v.push_back(s[i]);
            }
            else if(f==1){
                v.push_back(s[i]);
            }
        }
        int y = v.size();
        int z = s.size();
        int x = abs(z-y);
        int l1 = 1;
        int r1 = s.size();
        int l2 = 0;
        int r2 = 0;
        if(x==s.size()){
            r2 = 1;
            l2=1;
            cout<<l1<<' '<<r1<<' '<<l2<<' '<<r2<<'\n';
            continue;
        }
        int j = 0;
        int fl = 0;
        int mc = 0;
        int nc = 0;
        while(x>0){
            int cc=0;
            int co=0;
            int fc = 0;
            for(int i=0;i<v.size();i++){
                
                //cout<<i<<' '<<i+j<<' ';
                if(v[i]!=s[i+j]){
                     co++;
                }
                else{
                    if(fl==0){
                        cc=co;
                        //cout<<cc<<' ';
                        fl=1;
                    }
                }
                if(cc==0 && i==v.size()-1){
                    cc=co;
                }
                
            }
            //cout<<cc<<' '<<nc<<' ';
            if(cc>=nc){
                nc=cc;
                mc = 0;
                if(co>=mc){
                    mc=co;
                    l2=j+1;
                }
            }
            //cout<<co<<' '<<cc<<' ';
            j++;
            x--;
            fl=0;

        }
        r2 = l2+v.size()-1;

        cout<<l1<<' '<<r1<<' '<<l2<<' '<<r2<<'\n';   
    }
}