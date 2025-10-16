#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin>>n;
    const int N=1000010;
    int a[N],b[N];
    for(int i=1;i<=n;i++){
        cin>>a[i]>>b[i];
    }
    vector<int> t(n+4,1),ans;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(i==j){ 
                continue;
            }
            if(a[j]<=a[i]&&b[i]<=b[j]) {
                t[i]=0;
            }
        }
        if(t[i]){
            ans.push_back(i);
        }
    }
    cout<<ans.size()<<"\n";
    for(int i=0;i<ans.size();i++)
        cout<<ans[i]<<(i+1==ans.size()?"\n":" ");
}

int main() {
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}
