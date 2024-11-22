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
    bool flacko = false;
    char x;
    vector <char> a;
    vector <char> b;
    int count = 0;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        a.push_back(x);
    }
    for(int i=0;i<m;i++)
    {
        cin>>x;
        b.push_back(x);
    }
    int c=0;
    for(int i=0;i<n;i++)
    {
        int j=c;
        while(j<m)
        {
            
            if(a[i]==b[j])
            {
                count = count+1;
                flacko = true;
                c=j+1;
                break;
            }
            else
            {
                flacko = false;
            }
            j+=1;
        }
        //cout<<count<<" ";
        if (flacko == false or c>=m)
        {
            break;
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