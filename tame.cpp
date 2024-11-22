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
    vector <char> v1;
    vector <char> v2 = {'A', 'B','C', 'D', 'E','F','G'};
    cin>>n;
    cin>>m;
    char x;
    bool flacko = true;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        v1.push_back(x);
    }
    
    int count2 = 0;

    for(int i=0;i<v2.size();i++)
    {
        int count = 0;
        for(int j=0;j<v1.size();j++)
        {
            if(v2[i]==v1[j])
            {
                count+=1;
            }
        }
        if(count<m)
            count2 +=m-count;   
    }
    cout<<count2<<'\n';
}
 
int32_t main() {
    int t = 1;
    cin >> t;
    for (int tt = 1; tt <= t; tt++) {
        solve(tt);
    }
}