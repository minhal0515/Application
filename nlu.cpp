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
        vector<int> v(n);
        string s;
        cin>>s;
        for(int i=0;i<n;i++){
            int a=s[i]-'0';
            v[i]=a;
        }
        sort(v.begin(),v.end());
        int count = 0;
        vector<int> ans;
        for(int i=0;i<n;i++){
            int a=s[i]-'0';
            if(a!=v[i]){
                count++;
                ans.push_back(i+1);
            }
        }
        if(count==0){
            cout<<"Bob"<<'\n';
        } else{

            cout<<"Alice"<<'\n'<<count<<'\n';
            for(int i=0;i<ans.size();i++){
                cout<<ans[i]<<' ';
            }
            cout<<'\n';
        }
    }
}