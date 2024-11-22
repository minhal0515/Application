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
int n, m;
inline bool in(int u, int v){
    return(0<=u and u<n and 0<=v and v<m);
}

int32_t main() {
    int t = 1;
    cin >> t;
    int x[] = {-1,0,1,0};
    int y[] = {0,-1,0,+1};

    for (int tt = 1; tt <= t; tt++) {

        cin >> n;
        cin >> m;

        vector<vector<int>> vec(n, vector<int>(m));

        for(int i = 0; i < n; ++i) {
            for(int j = 0; j < m; ++j) {
                cin >> vec[i][j];
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                int mx = 0;
                for(int k=0;k<4;k++){
                    int ni = i + x[k], nj = j+y[k];
                    if(in(ni, nj))
                        mx = max(mx, vec[ni][nj]);
                }
                vec[i][j] = min(vec[i][j], mx);
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cout<<vec[i][j]<<' ';
            }
            cout<<'\n';
        }

    }
}