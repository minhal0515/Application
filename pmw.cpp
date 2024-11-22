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
    cin>>n;
    char s;
    char f;
    int a = 0;
    int c = 0;
    int ans = 0;
    vector <char> vec1;
    vector <char> vec2;
    int count1 = 0;
    int count2 = 0;
    for(int i=0;i<n;i++)
    {
        cin>>s;
        if (s == '1')
        {
            count1+=1;
        }
        vec1.push_back(s);
    }
    for(int i=0;i<n;i++)
    {
        cin>>f;
        if (f == '1')
        {
            count2+=1;
        }
        vec2.push_back(f);
    }
    for(int i=0;i<vec1.size();i++)
    {
        if(vec2[i]=='1' and vec1[i]=='0')
        {
            a+=1;
        }
    }
    for(int i=0;i<vec2.size();i++)
    {
        if(vec2[i]=='0' and vec1[i]=='1')
        {
            c+=1;
        }
    }
    if(count1>count2)
    {
        cout<<c<<'\n';
    }
    else
    {
        cout<<a<<'\n';
    }
}
 
int32_t main() {
    int t = 1;
    cin >> t;
    for (int tt = 1; tt <= t; tt++) {
        solve(tt);
    }
}