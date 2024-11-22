#include "bits/stdc++.h"
 
#ifdef local
#include "custom/debugger.h"
#else
#define debug(...) 42;
#endif
 
using namespace std;
#define int long long
 
void solve([[maybe_unused]] int test) {
    char board[8][8];
    bool flacko = true;
    vector <int> row;
    vector <int> col;
    vector<vector<int>> vec;
    for(int i=0;i<8;i++)
    {
        for(int j=0;j<8;j++)
        {
            
            if (flacko == true)
            {
                row.push_back(i);
                col.push_back(j);
            }
            if(row[i]=i)
            {
                flacko = false;
            }
            else if(col[j]=j)
            {
                flacko=false;
            }
            else if((row[i] =i+1)and (col[i]=i+1))
            {
                flacko = false;
            }
            else if((row[i]=i-1) and (col[i]=i+1))
            {
                flacko = false;
            }
            else if((row[i]=i+1)and (col[i]=i-1))
            {
                flacko = false;
            }
            else if((row[i]=i-1)and (col[i]=i-1))
            {
                flacko = false;
            }
            else
            {
                flacko = true;
            }
            // if(flacko == true)
            // {
            //     cout<<"row: "<<i<<" "<<"column: "<<j<<"\n";
            // }
        }
    }
}
 
int32_t main() {
    int t = 1;
    cin >> t;
    for (int tt = 1; tt <= t; tt++) {
        solve(tt);
    }
}