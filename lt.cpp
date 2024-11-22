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
    int m;
    cin>>n>>m;
    char s[n][m];
    int count = 0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>s[i][j];
        }
    }
    // for(int i=0;i<n;i++)
    // {
    //     for(int j=0;j<m;j++)
    //     {
    //         cout<<s[i][j];
    //     }
    // }

    for(int j=0;j<m;j++)
    {
        for(int i=0;i<n;i++)
        {
            //cout<<s[j][i];
            if(count == 0 and s[i][j]=='v')
            {
                count = 1;
                //cout<<"V FOUND";
                // j= j+1;
                // i=0;
                break;
            }
            if(count == 1 and s[i][j]=='i')
            {
                count = 2;
                //cout<<"I FOUND";
                // j= j+1;
                // i=0;
                break;
            }
            if(count == 2 and s[i][j]=='k')
            {
                count = 3;
                //cout<<"K FOUND";
                // j= j+1;
                //i=0;
                break;
            }
            if(count == 3 and s[i][j]=='a')
            {
                count = 4;
                //cout<<"A FOUND";
                //j= j+1;
                //i=0;
                break;
            }
            //cout<<s[j][i];
        }
    }
    if(count == 4)
    {
        cout<<"YES"<<'\n';
    }
    else
    {
        cout<<"NO"<<'\n';
    }
    
}
 
int32_t main() {
    int t = 1;
    cin >> t;
    for (int tt = 1; tt <= t; tt++) {
        solve(tt);
    }
}