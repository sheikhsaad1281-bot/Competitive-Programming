#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>> t;
    while(t--){
        int b,c;
        cin>> b >> c;
        cout<< c/ gcd(b,c) << endl;
    }
    return 0;
}