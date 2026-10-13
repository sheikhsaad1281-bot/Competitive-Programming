#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>> t;
    while(t--){
        string w;
        cin>> w;
        w.erase(w.size()-2);
        w +='i';
        cout<< w << endl;
    }
    return 0;
}