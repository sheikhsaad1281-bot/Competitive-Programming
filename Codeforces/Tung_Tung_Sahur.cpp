#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        string p, s;
        cin >> p >> s;
        int i = 0, j = 0;
        bool ok = true;
        while (i < p.size() && j < s.size()) {
            if (p[i] != s[j]) {
                ok = false;
                break;
            }
            int cntP = 0, cntS = 0;
            char c = p[i];
            while (i < p.size() && p[i] == c) {
                cntP++;
                i++;
            }
            while (j < s.size() && s[j] == c) {
                cntS++;
                j++;
            }
            if (cntS < cntP || cntS > 2 * cntP) {
                ok = false;
                break;
            }
        }
        if (i != p.size() || j != s.size()) {
            ok = false;
        }
        if(ok){
            cout<< "YES" << endl;
        }
        else{
            cout<< "NO" << endl;
        }
    }
    return 0;
}
