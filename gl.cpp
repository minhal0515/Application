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
        int x,y,k;
        cin>>x>>y>>k;
        vector <int> y1;
        vector <int> x1;
        int rx = x*k;
        int count = x;
        int c1=x;
        int c2=x;
        if(k%2==0){
                c1-=1;
                //c2+=1;
        }
        for(int i=0;i<k;i++){
            y1.push_back(y);
            if(i==0 or i%2==0){
                x1.push_back(c1);
                c1-=1;
            }
            else if(i==1 or i%2!=0){
                    //cout<<"bigbootylee";
                c2+=1;
                x1.push_back(c2);
            }
            
        }
        for(int i=0;i<k;i++){
            cout<<x1[i]<<' '<<y1[i]<<'\n';
        }
    }
}