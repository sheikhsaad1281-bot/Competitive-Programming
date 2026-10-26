#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n, a, b, p, q;
    cin >> n >> a >> b >> p >> q;
    long long cnt_a = n / a;
    long long cnt_b = n / b;
    long long lcm_ab = (a / __gcd(a, b)) * b;
    long long common = n / lcm_ab;
    long long ans = cnt_a * p + cnt_b * q - common * min(p, q);
    cout << ans << endl;
    return 0;
}