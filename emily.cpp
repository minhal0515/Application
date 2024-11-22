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
    int x;
    int m = 0;
    int p = 0;
    int neg=0;
    vector <int> vec;
    vector <int> ps;
    vector <int> ns;
    bool flacko = true;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        vec.push_back(x);
        m+=x;
    }
    m = m/n;
    for(int i=0;i<vec.size()-1;i++)
    {
        int temp = 0;
        if(vec[i]>m)
        {
            temp = vec[i]-m;
            vec[i] = m;
            vec[i+1] = temp+vec[i+1];
        }

    }
    for(int i=0;i<vec.size();i++)
    {
        if(vec[i]!=m)
        {
            flacko = false;
        }
    }
    if(flacko == true)
    {
        cout<<"YES"<<'\n';
    }
    if(flacko == false)
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