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
        unsigned int x,y;
        cin>>x>>y;
        int n=(x^y)^1;
        int t;
        vector <int> v;
        int count = 0;
        for(int i = 2;i<INT_MAX;i++){
            t = n;
            n=(x^y)^i;
            if(n==t+1){
                count++;
            }
            else{
                if(count>0){
                    v.push_back(count);
                }
                count = 0;
            }
        }
        if(count>0){
            v.push_back(count);
        }
        sort(v.begin(),v.end());
        cout<<v.back()+1<<'\n';
        
    }
}