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
    int temp;
    int al;
    vector <int> a;
    vector <int> vec;
    bool flacko = true;
    for(int i=0;i<n;i++)
    {
        cin>>al;
        a.push_back(al);
        vec.push_back(al);
    }
    
    
    sort(vec.begin(),vec.end());
    
    // for(int i=0;i<a.size()-1;i++)
    // {
    //     for(int j=i+1;j<a.size();j++)
    //     {    
    //         if((a[i]%2==0 and a[j]%2==0)and(a[i]>a[j]))
    //         {
    //             temp = a[i];
    //             a[i]=a[j];
    //             a[j]=temp;
    //         }
    //         else if((a[i]%2!=0 and a[j]%2!=0)and(a[i]>a[j]))
    //         {
    //             temp = a[i];
    //             a[i]=a[j];
    //             a[j]=temp;
    //         }
    //     }
    // }
    for(int i=0;i<n;i++)
    {
        
        if((a[i]%2)==(vec[i]%2))
        {
            flacko = true;
        }
        else
        {
            flacko = false;
            break;
        }
    }
    if(flacko == true)
    {
        cout<<"YES"<<"\n";
    }
    else
    {
        cout<<"NO"<<"\n";
    }

}
 
int32_t main() {
    int t = 1;
    cin >> t;
    for (int tt = 1; tt <= t; tt++) {
        solve(tt);
    }
}