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
    int t;
    cin >> t;
    for (int tt = 0; tt < t; tt++) 
    {
        // int n;
        // scanf("%lld", &n);
        int a,b,c,max,min;
        int count =0;
        //for(int i=0;i<t;i++)
        cin>>a>>b>>c;
        if(a>b)
        {
            max = a;
            min = b;
        }
        else
        {
            max = b;
            min = a;
        }
        while(max>min)
        {
            max = max-c;
            min = min+c;
            count = count+1;
        }
        cout<<count<<'\n';
    }
}