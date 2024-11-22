#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector<int> player;
    int n;
    cin>>n;
    int a;
    bool b = false;
    for (int i = 0; i<n; i++)
    {
        cin>>a;
        player.push_back(a);
    }
    for (int i = 0; i<n-1; i++)
    {
        if (player[i] == player[i+1])
            b = true;
    }
    if (b)
        cout<< "YES";
    else
        cout<<"NO";
}