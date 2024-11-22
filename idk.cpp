#include "bits/stdc++.h"
 
#ifdef local
#include "custom/debugger.h"
#else
#define debug(...) 42;
#endif
 
using namespace std;
#define int long long

 
int32_t main() {
    ifstream file("input.txt");
        if (!file.is_open()) {
        cerr << "Error: Could not open file!" << endl;
        return 1;
    }

    string line;
    cout << "Reading file content:" << endl;
    map<string,string> mp;
    while(getline(file,line)){
        stringstream ss(line);
        string key,value;
        if (getline(ss,key,':') && getline(ss,value)){
            value.erase(0, value.find_first_not_of(" \t")); 
            mp[key] = value;
        }
    }
    file.close();
    for (auto it = mp.begin(); it != mp.end(); ++it) {
        cout<<it->first<<" : "<<it->second<<'\n';
    }

    return 0;
}