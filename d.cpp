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
        string t;
        cin>>s>>t;
        int count = 0;
        int fl=0;
        int j=0;
        for(int i=0;i<s.size();i++){
            if(s[i]==t[j]){
                count++;
                j++;
            }
            else if(s[i]=='?' and count <t.size()){
                count++;
                s[i]=t[j];
                j++;
            }
            else if(s[i]=='?' and count == t.size()){
                s[i]=='a';
            }                
        }

        if(count<t.size()){
            cout<<"NO"<<'\n';
        }
        else if (count>=t.size()){
            for(int i=0;i<s.size();i++){
                if(s[i]=='?'){
                    s[i]='a';
                }
            }
            cout<<"YES"<<'\n';
            for(int i=0;i<s.size();i++){
                cout<<s[i];
            }
            cout<<'\n';
        }

        
    }
}