#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s1;
        string s2;
        cin>>s1>>s2;
        int x = 0;
        int f = 0;
        int t = 0;
        string a;
        string b;
        if(s1.size()<=s2.size()){
            x = s1.size();
            f = s2.size();
            t = 1;
            a = s1;
            b = s2;
        }
        else{
            x = s2.size();
            f=s1.size();
            a = s2;
            b = s1;
        }
        int l = 0;
        int sum = 0;
        while(a[l]==b[l] and l<x){
            //k++;
            l++;
        }
        if(l>0){
            sum=l+1;
        }
        sum+=f-l;
        sum+=x-l;
        cout<<sum<<'\n';

    }     
    return 0;
}
