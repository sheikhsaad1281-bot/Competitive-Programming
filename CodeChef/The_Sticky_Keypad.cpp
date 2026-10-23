#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n;
        int d;
        cin >> n >> d;
        while (true) {
            long long temp = n;
            long long place = 1;
            bool found = false;

            while (temp > 0) {
                int digit = temp % 10;
                if (digit == d) {
                    n = (n / place + 1) * place;
                    found = true;
                    break;
                }
                temp /= 10;
                place *= 10;
            }
            if (!found) {
                break;
            }
        }
        cout << n << endl;
    }
    return 0;
}