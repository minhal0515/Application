#include "bits/stdc++.h"

#ifdef local
#include "custom/debugger.h"
#else
#define debug(...) 42;
#endif
 
using namespace std;
#define int long long
 
void solve([[maybe_unused]] int test) {
    int n,q;
    cin>>n>>q;
    vector <int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    int c1=0;

    int c2=0;
    vector <int> count1(n);
    vector <int> count2(n);
    set <int> s;
    for(int i=0;i<n;i++){
        if(v[i]==0){
            c1++;
        } else{
            c2++;
        }
        count1[i]=c1;
        count2[i]=c2;
    }
    for(int i=0;i<n-1;i++){
        if(v[i]==v[i+1]){
           s.insert(i+2);
        }
    }
    // for(int i=0;i<n;i++){
    //     cout<<count2[i]<<' ';
    // }
    for(int i=0;i<q;i++){
        int r,l;
        int ans=0;
        cin>>l>>r;
        int y=l+1;
        if(v[l-1]==0){
            if(((count1[r-1]-count1[l-1]+1)%3!=0)||((count2[r-1]-count2[l-1])%3!=0 && (count2[r-1]-count2[l-1])!=0)){
                cout<<-1<<'\n';
                continue;
            }
        } else{
            if((count2[r-1]-count2[l-1]+1)%3!=0||((count1[r-1]-count1[l-1])%3!=0 && (count1[r-1]-count1[l-1]!=0))){
                //cout<<count1[r-1]-count1[l-1]%3;
                cout<<-1<<'\n';
                continue;
            }
        }
        auto it = s.lower_bound(y);
        //cout<<*it<<r<<'\n';
        if(it==s.end()||*it>=r){
            //cout<<y;
            ans+=1;
        }

        ans+=((r-l)+1)/3;
        cout<<ans<<'\n';
    }
}
 
int32_t main() {
    int t = 1;
    cin >> t;
    for (int tt = 1; tt <= t; tt++) {
        solve(tt);
    }
}