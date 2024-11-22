#include "bits/stdc++.h"
 
#ifdef local
#include "custom/debugger.h"
#else
#define debug(...) 42;
#endif
 
using namespace std;
#define int long long
 
void solve([[maybe_unused]] int test) {
    int n,m;
    cin>>n>>m;
    char x,y;
    vector<vector<int>> a(n, vector<int>(m));
    vector<vector<int>> b(n, vector<int>(m));
    for(int i = 0;i<n;i++){
        string row;
        cin>>row;
        for(int j = 0;j<m;j++){
            //x1.push_back(x);
            a[i][j]=row[j]-'0';
        }
    }
    for(int i = 0;i<n;i++){
        string row;
        cin>>row;
        for(int j = 0;j<m;j++){
            b[i][j]=row[j]-'0';   
        }
    }
    int flacko = 1;
    for(int i = 0;i<n;i++){
        int ra = 0;
        //int ca = 0;
        int rb = 0;
        //int cb = 0;
        for(int j = 0;j<m;j++){
            ra += a[i][j];
            //ca += a[j][i];
            rb += b[i][j];
            //cb += b[j][i];
        }
        //cout<<ra<<rb;
        if(ra%3!=rb%3){
            flacko = 0;
            break;
        }
        if(flacko==1){
            for(int i = 0;i<m;i++){
                int ca=0;
                int cb = 0;
                for(int j=0;j<n;j++){
                    //cout<<i<<j<<' ';
                    ca+=a[j][i];
                    cb+=b[j][i];
                }
                //cout<<ca<<cb<<' ';
                if(ca%3!=cb%3){
                    flacko = 0;
                    break;
                }
            }
        
        }
        
    }
    if(flacko==1){
        cout<<"YES"<<'\n';
    }
    else{
        cout<<"no"<<'\n';
    }
    
}
 
int32_t main() {
    int t = 1;
    cin >> t;
    for (int tt = 1; tt <= t; tt++) {
        solve(tt);
    }
}