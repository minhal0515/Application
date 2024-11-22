#include "bits/stdc++.h"
 
#ifdef local
#include "custom/debugger.h"
#else
#define debug(...) 42;
#endif
 
using namespace std;
#define int long long
 
void solve([[maybe_unused]] int test) {
    int n;
    cin>>n;
    char v[2][n];
    for(int i=0;i<2;i++){
        for(int j=0;j<n;j++){
            cin>>v[i][j];
        }
    }
    int count=0;
    for(int i=0;i<2;i++){
        for(int j=0;j<n-2;j++){
            if(v[i][j]=='x' and i==0){
                if(v[i][j+1]=='.' and (v[i][j+2]=='x' and v[1][j]=='.' and v[1][j+1]=='.' and v[1][j+2]=='.')){
                    count++;
                }
            }
            else if(v[i][j]=='x' and i==1){
                if(v[i][j+1]=='.' and (v[i][j+2]=='x' and v[0][j]=='.' and v[0][j+1]=='.' and v[0][j+2]=='.')){
                    count++;
                }
            }
        }
    }
    cout<<count<<'\n';


}
 
int32_t main() {
    int t = 1;
    cin >> t;
    for (int tt = 1; tt <= t; tt++) {
        solve(tt);
    }
}
