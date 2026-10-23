#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    int initial_len = 1;
    for (int i = 1; i < n; ++i) {
        if (s[i] != s[i - 1]) {
            initial_len++;
        }
    }
    int max_reduction = 0;
    for (int i = 1; i < n - 1; ++i) {
        if (s[i] == s[i - 1] || s[i] == s[i + 1]) {
            max_reduction = max(max_reduction, 0);
        } else if (s[i - 1] == s[i + 1]) {
            max_reduction = max(max_reduction, 2);
        } else {
            max_reduction = max(max_reduction, 1);
        }
    }
    cout << initial_len - max_reduction << "\n";
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
