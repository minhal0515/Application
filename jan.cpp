#include "bits/stdc++.h"
 
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
        int y = 14;
        if(n%2!=0){
            if(n<27){    
                cout<<"-1"<<'\n';
                continue;
            }
            else{
                cout<<"1 3 3 4 4 5 5 6 6 1 2 7 7 8 8 9 9 10 10 11 11 12 12 13 13 1 2 ";
                for (int i=14;i<=n/2;i++){
                    cout<<i<<" "<<i<<" ";
                }
                cout<<'\n';
            }
        }
        else if(n%2==0){
            int count = n;
            int x = 1;
            while(count>0){
                cout<<x<<' ';
                if(count%2!=0){
                    x++;
                }
                count--;
            }
            cout<<'\n';
        }
    }
}