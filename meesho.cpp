#include "bits/stdc++.h"
 
using namespace std;
typedef long long ll;
 
void solve([[maybe_unused]] int test) {
    int n;
    cin >> n;
    vector<int> v(n);

    // Reading input
    for(int i = 0; i < n; i++) {
        cin >> v[i];
    }

    map<int, int> fr;

    // Counting frequency of each number
    for(int c : v) {
        fr[c]++;
    }

    // Creating vector of pairs from the map
    vector<pair<int, int>> vec(fr.begin(), fr.end());

    // Sort the vector by frequency in descending order and by number itself in descending order if frequencies are the same
    sort(vec.begin(), vec.end(), [](const pair<int, int>& a, const pair<int, int>& b) {
        if (a.second == b.second)
            return a.first > b.first;
        return a.second > b.second;
    });

    int sum = 0;
    unordered_set<int> skippedNumbers; // To track numbers that need to be skipped

    // Processing each unique number by frequency
    for(const auto& pair : vec) {
        int curr = pair.first;
        int freq = pair.second;

        // Check if the current number should be skipped due to adjacency
        if (skippedNumbers.find(curr) != skippedNumbers.end()) {
            continue;
        }

        // Add the current number's total to the sum
        sum += curr * freq;

        // Mark the adjacent numbers to be skipped
        skippedNumbers.insert(curr - 1);
        skippedNumbers.insert(curr + 1);
    }

    // Output the final sum
    cout << sum << '\n';
}
 
int32_t main() {
    int t = 1;
    cin >> t;
    for (int tt = 1; tt <= t; tt++) {
        solve(tt);
    }
}
