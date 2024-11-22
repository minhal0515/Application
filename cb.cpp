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
        int a,b,c;
        cin>>a>>b>>c;
        for(int i=0;i<5;i++){
            if(a<=b and a<=c){
                a+=1;
            }
            else if(b<=a and b<=c){
                b+=1;
            }
            else{
                c+=1;
            }
        }
        cout<<a*b*c<<'\n';
        
    }
}