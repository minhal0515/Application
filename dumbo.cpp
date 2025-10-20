#include <bits/stdc++.h>
using namespace std;

int main(){
    int *arr;
    int n, i;
    cin>>n;
    arr = (int*)malloc(n*sizeof(int));
    for (i=0;i<n;i++) {
        cin>>arr[i];
    }
    for (i=0;i<n;i++) {
        cout<<arr[i]<<' ';
    }
    cout<<'\n';
    free(arr);
    return 0;
}
