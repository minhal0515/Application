#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n,k;
        cin>>n>>k;
        if(k==1 && n==1){
            cout<<1<<'\n'<<1<<'\n';
            continue;
        }
        if(k==n || k==1){
            cout<<-1<<'\n';
            continue;
        }
        int m = 3;
        int s=1;
        int mid,e;
        if(k%2!=0){
            mid=k-1;
            e=k+2;
        }else{
            mid = k;
            e=k+1;
        }
        cout<<m<<'\n'<<s<<' '<<mid<<' '<<e<<'\n';

    }
}
