#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>> t;
    while(t--){
        long long n;
        int k;
        cin>> n >> k;
        if(k==1 && n%4!=0){
            cout<< "Ambiguous" << endl;
        }
        else if(k==0 && n%4==0){
            cout<< "Off" << endl;
        }
        else{
            cout<< "On" << endl;
        }
    }
    return 0;
}