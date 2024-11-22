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
        int n,k;
        cin>>n>>k;
        vector <int> v;
        int a;
        for(int i=0;i<k;i++){
            cin>>a;
            v.push_back(a);
        }
        sort(v.begin(),v.end());
        int count = 0;
        for(int i=0;i<v.size()-1;i++){
            if(v[i]>1){
                count+=2*(v[i]-1);
            }
            count+=1;
        }
        cout<<count<<'\n';
        
    }
}