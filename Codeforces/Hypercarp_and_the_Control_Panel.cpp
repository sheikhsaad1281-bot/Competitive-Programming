#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        vector<pair<int, int>> b;
        for (int i = 0; i < n; i++) {
            if (b.empty() || b.back().first != a[i]) {
                b.push_back({a[i], 1});
            } else {
                b.back().second++;
            }
        }
        int m = b.size();
        bool found = false;
        for (int i = 0; i < m - 1; i++) {
            if (b[i].second > 1 && b[i + 1].second > 1) {
                cout << m + 2 << '\n';
                found = true;
                break;
            }
        }
        if (found) continue;
        for (int i = 0; i < m; i++) {
            if (b[i].second > 1 &&
                i < m - 1 &&
                (i + 2 >= m || b[i + 2].first != b[i].first)) {
                cout << m + 1 << '\n';
                found = true;
                break;
            }

            if (b[i].second > 1 &&
                i > 0 &&
                (i - 2 < 0 || b[i - 2].first != b[i].first)) {
                cout << m + 1 << '\n';
                found = true;
                break;
            }
        }
        if (!found) {
            cout << m << '\n';
        }
    }
    return 0;
}
