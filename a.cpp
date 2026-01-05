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
        int c=0;
        int f=1;
        for(int i=0;i<s.size();i++){
            if(s[i]=='u'){
                c++;
            }
        }
        if(c==0){
            //f=0;
            cout<<0<<'\n';
            continue;
        }
        if(s[0]=='s' && s[s.size()-1]=='s'){
            for(int i=1;i<s.size()-1;i++){
                if(s[i]!=s[i-1]&&s[i]!=s[i+1]){
                    continue;
                } else{
                    f=0;
                }
            }
        } else{
            f=0;
        }
        int count=0;
        if(f==1){
            cout<<0<<'\n';
        } else{
            if(s[0]=='u'){
                count++;
                s[0]='s';
            }
            if(s[s.size()-1]=='u'){
                count++;
                s[s.size()-1]='s';
            }
            for(int i=1;i<s.size()-1;i++){
                if(s[i]=='u'){
                    // if(s[i-1]!='s'){
                    //     count++;
                    // }
                    if(s[i+1]!='s'){
                        count++;
                        s[i+1]='s';
                    }
                }
            }
            cout<<count<<'\n';
        }
    }
}