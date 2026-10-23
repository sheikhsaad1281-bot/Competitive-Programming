#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> p(n), a(n);
        vector<int> pos(n + 1);

        for (int i = 0; i < n; i++) {
            cin >> p[i];
            pos[p[i]] = i;
        }

        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        bool ok = true;
        for (int i = 1; i < n; i++) {
            if (pos[a[i - 1]] > pos[a[i]]) {
                ok = false;
                break;
            }
        }

        cout << (ok ? "YES" : "NO") << '\n';
    }

    return 0;
}
