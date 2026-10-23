#include <bits/stdc++.h>
using namespace std;

int main() {
 
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> pos(n + 1);
        for (int i = 1; i <= n; i++) {
            int x;
            cin >> x;
            pos[x] = i;
        }
        bool ok = true;
        int prev = 0;
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            if (pos[x] < prev) ok = false;
            prev = pos[x];
        }
        if(ok){
            cout<< "YES" << endl;
        }
        else{
            cout<< "NO" << endl;
        }
    }
}