#include "bits/stdc++.h"
 
#ifdef local
#include "custom/debugger.h"
#else
#define debug(...) 42;
#endif
 
using namespace std;
#define int long long

// void solve() {
    
// }

    

int32_t main() {
    int t = 1;
    //cin >> t;
    for (int tt = 1; tt <= t; tt++) {
        string s;
        cin>>s;
    int n = s.size();
    unordered_map<char, int> mp;
    for(auto & c:s){
        mp[c]++;
    }
    int fo=0;
    int f = 0;
    int od;
    char o;
    for(auto &it:mp){
        if(it.second%2!=0){
            if(fo==0){
                fo=1;
                od = it.second;
                o = it.first;
            }
            else{
                f=1;
                break;
            }
        }
    }
    //cout<<od<<o<<n;
    vector <char> ans(n);
    if(fo==1){
        if(f==1){
            cout<<"NO SOLUTION";
        } else{
            int x = n/2-od/2;
            int y = n/2+od/2;
            for(int i=x;i<=y;i++){
                ans[i]=o;
            }
            int ite = 0;
            for(auto &it :mp){
                if(it.first == o){
                    continue;
                }
                for(int i=0;i<it.second/2;i++){
                    ans[ite+i]=it.first;
                    ans[n-ite-1-i]=it.first;
                }
                ite+=it.second/2;
            }
        }
    } else{
        int ite = 0;
        for(auto &it :mp){
                for(int i=0;i<it.second/2;i++){
                    ans[ite+i]=it.first;
                    ans[n-ite-1-i]=it.first;
                    //cout<<i<<' ';
                }
                ite+=it.second/2;
                //cout<<ite;
            }
    }
    if(f!=1){
    for(int i=0;i<n;i++){
        cout<<ans[i];
    }
    }
    }
}