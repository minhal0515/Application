#include "bits/stdc++.h"
#ifdef local
#include "custom/debugger.h"
#else
#define debug(...) 42;
#define ll long long
#endif

using namespace std;
#define int long long 
using vi = vector<int>;
using vvi = vector<vi>;

int32_t main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<string> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        if (n == 1 && m == 1) {
            cout << 0 << '\n';
            continue;
        }

        queue<pair<long long, long long>> q;
        vvi vis(n, vi(m, 0));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if ((i == 0 && a[i][j] == 'U') || (i == n - 1 && a[i][j] == 'D') ||
                    (j == 0 && a[i][j] == 'L') || (j == m - 1 && a[i][j] == 'R')) {
                    q.push({i, j});
                    vis[i][j] = 1;
                }
            }
        }

        while (!q.empty()) {
            auto p = q.front();
            q.pop();
            int i = p.first, j = p.second;

            if (i - 1 >= 0 && !vis[i - 1][j] && a[i - 1][j] == 'D') {
                vis[i - 1][j] = 1;
                q.push(make_pair(i - 1, j));
            }
            if (j - 1 >= 0 && !vis[i][j - 1] && a[i][j - 1] == 'R') {
                vis[i][j - 1] = 1;
                q.push(make_pair(i, j - 1));
            }
            if (i + 1 < n && !vis[i + 1][j] && a[i + 1][j] == 'U') {
                vis[i + 1][j] = 1;
                q.push(make_pair(i + 1, j)); 
            }
            if (j + 1 < m && !vis[i][j + 1] && a[i][j + 1] == 'L') {
                vis[i][j + 1] = 1;
                q.push(make_pair(i, j + 1)); 
            }

            auto check = [&](int ii, int jj) {
                if (ii < 0 || ii >= n || jj < 0 || jj >= m) { 
                    return;
                }
                if (vis[ii][jj] || a[ii][jj] != '?') {
                    return;
                }
                if (ii - 1 >= 0 && !vis[ii - 1][jj]) {
                    return;
                }
                if (jj - 1 >= 0 && !vis[ii][jj - 1]) {
                    return;
                }
                if (ii + 1 < n && !vis[ii + 1][jj]) {
                    return;
                }
                if (jj + 1 < m && !vis[ii][jj + 1]) {
                    return;
                }
                vis[ii][jj] = 1;
                q.push(make_pair(ii, jj));
            };

            check(i - 1, j);
            check(i + 1, j);
            check(i, j + 1);
            check(i, j - 1);
        }

        int ans = 0;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (vis[i][j] == 0) {
                    ans++;
                }
            }
        }
        cout << ans << '\n';
    }
}
