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
    scanf("%lld",&n);
    int a;
    int count = 0;
    int sum=0;
    //vector <int> neg;
    vector <int> vec;
    bool po = true;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        vec.push_back(a);
    }
    for(int i=0;i<n;i++)
    {
            
        if(vec[i]<0 and po == true)
        {
            count = count+1;
            po = false;
        }
        if(vec[i]>0 and po==false)
        {
            po = true;
        }
        

    }
    for(int i=0;i<vec.size();i++)
    {
        if(vec[i]<0)
        {
            vec[i] = vec[i]*-1;
        }
        sum =sum+vec[i];  
    }

    cout<<sum<<" "<<count<<"\n";

}
 
int32_t main() {
    int t = 1;
    cin >> t;
    for (int tt = 1; tt <= t; tt++) {
        solve(tt);
    }
}