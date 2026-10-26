#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        string s;
        cin >> n >> s;
        int firstA = -1, lastB = -1;
        for (int i = 0; i < n; i++) {
            if (s[i] == 'A' && firstA == -1) {
                firstA = i;
            }
            if (s[i] == 'B') {
                lastB = i;
            }
        }
        if (firstA != -1 && lastB > firstA) {
            cout << lastB - firstA << '\n';
        } else {
            cout << 0 << '\n';
        }
    }
    return 0;
}