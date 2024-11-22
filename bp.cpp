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
    int mac = 0;
    scanf("%lld", &n);
    vector<int> a(n);
    for (int i = 0;i<n;i++)
    {
        cin>>a[i];
    }
    vector<int> vec;
    for (int i = 0; i<n; i++)
    {
        int count=0;
        // printf("%lld", i);
        if (a[i] == 0)
        {
            for(int j = i; j<n; j++)
            {
                if (a[j] == 0)
                {
                    count = count+1;
                }
                else
                {
                    break;
                }
                
            }
            vec.push_back(count);       

        }
    }
    // for (int i = 0; i < (int) vec.size(); i++) {
        // printf("%lld ", vec[i]);
    // }
    // printf("\n");
    for(int i = 0;i< (int) vec.size();i++)
    {
        if (vec[i]>mac)
            mac = vec[i];
        else
        {
            vec[i] = mac;
        }
    }
    cout << mac << '\n';
}
 
int32_t main() {
    int t = 1;
    cin >> t;
    for (int tt = 1; tt <= t; tt++) {
        solve(tt);
    }
}