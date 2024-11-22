#include "bits/stdc++.h"
 
#ifdef local
#include "custom/debugger.h"
#else
#define debug(...) 42;
#endif
 
using namespace std;
#define int long long
 
void solve([[maybe_unused]] int test) {
    //int n;
    char zest[3][3];
    //scanf("%lld", &n);
    string m;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cin>>zest[i][j];
        }
    }
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            if(zest[0][j] == zest[1][j] and zest[0][j] == zest[2][j] and zest[0][j]!='.')
            {
                m = zest[0][j];
            }
            if(zest[0][0] == zest[1][1] and zest[0][0] == zest[2][2] and zest[0][0]!='.')
            {
                m=zest[0][0];
            }
            if(zest[0][2] == zest[1][1] and zest[0][2] == zest[2][0] and zest[0][2]!='.')
            {
                m=zest[0][2];
            }
            if(zest[i][0]==zest[i][1] and zest[i][0]==zest[i][2] and zest[i][0] !='.')
            {
                m=zest[i][0];
            }
            if(m=="+")
            {
                break;
            }
            if(m=="X")
            {
                break;
            }
            if(m=="O")
            {
                break;
            }
            else{
                m="DRAW";
            }
            
        }

    }
    cout<<m<<"\n";

}
 
int32_t main() {
    int t = 1;
    cin >> t;
    for (int tt = 1; tt <= t; tt++) {
        solve(tt);
    }
}