#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>> t;
    while(t--){
        int n,s;
        cin>> n >> s;
        int correct=(s+3)/4;
        int wrong=correct*4-s;
        int mn_ttl=correct+wrong;
        if(mn_ttl>n){
            cout<< -1 << endl;
        }
        else{
            cout<< mn_ttl << endl;
        }
    }
    return 0;
}