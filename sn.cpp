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
        string a;
        string b;
        cin>>a>>b;
        int l;
        int s;
        vector <int> v;
        int c=0;
        int sum = a.length()+b.length();
        for(int i=0;i<b.length();i++){
            int count = 0;
            int p = i;
            for(int j=0;j<a.length();j++){
                if(b[p]==a[j]){
                    p++;
                    count++;
                }
            }
            v.push_back(count);
        }
        // while(c<b.length()){
        //     int count = 0;
        //     if(b[p]==a[i]){
        //         p++;
        //         count++;
        //     }
        //     v.push_back(count);
        //     p++;
        // }
        sort(v.begin(),v.end());
        int d = v[v.size()-1];
        
        //cout<<sum<<count;
        int ans = sum-d;
        cout<<ans<<'\n';


    }
}