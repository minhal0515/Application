#include "bits/stdc++.h"

using namespace std;
typedef long long ll;

void solve([[maybe_unused]] int test) {
    int n;
    cin >> n;
    vector<int> v;
    map <pair<int, int>, int> m;
    int ans = 0;
    vector <int> cnt(2);
    for (int i = 0; i < n; i++) {
        int x, y;
        cin >> x >> y;
        m[{x, y}]++;
        cnt[y]++;
    }

    for (const auto& [p, j] : m) {
        auto [x, y] = p;
        if (m.count({x, 1 - y})) {
            ans += cnt[y] - 1;
        }
        if (m.count({x + 1, 1 - y}) && m.count({x - 1, 1 - y})) {
            ans++;
        }
    }
    cout << ans << '\n';
}

int32_t main() {
    int t = 1;
    cin >> t;
    for (int tt = 1; tt <= t; tt++) {
        solve(tt);
    }
}
