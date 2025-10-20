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
    //cin >> t;
    for (int tt = 1; tt <= t; tt++) {
        string s;
        getline(cin, s);
        char c;
        int count = 0;
        map<char,int> mapp;
        for(char b = 'a';b<='z';++b){
            mapp[b]=0;
        }
        for(char c:s){
            if(isalpha(c)){
                c=tolower(c);
            
            }
                mapp[c]++;
        }
        //int x=0;
        for(auto x=mapp.begin();x!=mapp.end();++x){
            //cout<<x->first<<' '<<x->second<<'\n';
            if(x->second==0){
                cout<<x->first<<' ';
            }
        }
        cout<<'\n';

    }
}