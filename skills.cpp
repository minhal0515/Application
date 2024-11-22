#include "bits/stdc++.h"
 
#ifdef local
#include "custom/debugger.h"
#else
#define debug(...) 42;
#endif
 
using namespace std;
#define int long long

void solve([[maybe_unused]] int test) 
{
    int n;
    int t;
    int t1=1e9;
    int t2 = 1e9;
    int s;
    int time;
    int skill = 0;
    int sum=0;
    vector<int> arr_1;
    vector<int> arr_10;
    vector<int> arr_11;
    scanf("%lld", &n);
    for(int i=0;i<n;i++)
    {
        cin>>t>>s;
        if (s == 1)
        {
            arr_1.push_back(t);
        }
        if (s==10)
        {
            arr_10.push_back(t);
        }
        if (s==11)
        {
            arr_11.push_back(t);
        }        
    }
    sort(arr_1.begin(),arr_1.end());
    sort(arr_10.begin(),arr_10.end());
    sort(arr_11.begin(),arr_11.end());
    // for(int i =0;i<arr_1.size(); i++)
    // {
    //     cout << arr_1[i];
    // }
    // cout<<'\n';
    // for(int i=0;i<arr_10.size();i++)
    // {
    //     cout<<arr_10[i];
    // }
    // cout<<'\n';
    // for(int i=0;i<arr_11.size();i++)
    // {
    //     cout<<arr_11[i];
    // }
    // cout<<'\n';
    
    if (arr_1.size()==0 and arr_11.size()==0)
        {
            time = -1;
        }
    else if (arr_10.size()==0 and arr_11.size()==0)
        {
            time=-1;
        }
    else
    {
        if (arr_1.size()>0 and arr_10.size()>0)
        {
            t1 = arr_1[0] + arr_10[0];
        }
        if(arr_11.size()!=0)
        {
            t2 = arr_11[0];
        }
        time = min(t1,t2);
}
    cout << time << '\n';
}
 
int32_t main() {
    int t = 1;
    cin >> t;
    for (int tt = 1; tt <= t; tt++) {
        solve(tt);
    }
}