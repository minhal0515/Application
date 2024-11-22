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
 
void solve([[maybe_unused]] int test) {
    int n;
    cin>>n;
    vector <int> a;
    vector <int> b;
    int m;
    vector <int> d;
    int x,y,z;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        a.push_back(x);
    }
    for(int i=0;i<n;i++)
    {
        cin>>y;
        b.push_back(y);
    }
    cin>>m;
    for(int i=0;i<m;i++)
    {
        cin>>z;
        d.push_back(z);
    }
    int ans = 0;
    int g;
    g = d[m-1];
    for(int i=0;i<n;i++)
    {
       // cout<<b[i]<<' '<<g<<' ';
        if(b[i]!=g)
        {
            ans=0;
        }
        else
        {
            ans=1;
            break;
        } 
    }
    if(ans==0)
    {
        cout<<"no"<<'\n';
        return;
    }
    vector<int> s;
    for(int i=0;i<n;i++)
    {
        if(b[i]!=a[i])
        {
            s.push_back(b[i]);
        }
    }
    int flacko = s.size();
    int count =0;
    sort(s.begin(),s.end());
    sort(d.begin(),d.end());
    int is=0;
    int id=0;
    while(is<s.size() and id<m)
    {
        if(s[is]==d[id])
        {
            count+=1;
            is++;
            id++;
            //ib=id;
        }
        if(s[is]>d[id])
        {
            id++;
        }
        if(s[is]<d[id])
        {
            break;
        }
    //    cout<<d[id]<<" "<<s[is]<<" "<<count<<" "<<flacko<<'\n';
    }
    //out<<count<<flacko;
    if(count==flacko)
    {
        cout<<"yes"<<'\n';
    }
    else
    {
        cout<<"no"<<'\n';
    }


}
 
int32_t main() {
    int t = 1;
    cin >> t;
    for (int tt = 1; tt <= t; tt++) {
        solve(tt);
    }
}