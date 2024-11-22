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
        int c = 0;;
        for(int i=0;i<s.size()-1;i++){
            if(s[i]==s[i+1] and s[i]!='z'){
                s.insert(s.begin()+i+1,s[i]+1);
                c=1;
                break;
            }
            else if(s[i]==s[i+1] and s[i]=='z'){
                s.insert(s.begin()+i+1,'a');
                c=1;
                break;
                }
        }

        if(c==0 and s[s.size()-1]!='z'){
            s.insert(s.begin()+ s.size(), s[s.size()-1]+1);
        }
        else if(c==0 and s[s.size()-1]=='z'){
            s.insert(s.begin()+ s.size(), 'a');   
        }
        for(int i=0;i<s.size();i++){
            cout<<s[i];
        }
        cout<<'\n';
        
    }
}