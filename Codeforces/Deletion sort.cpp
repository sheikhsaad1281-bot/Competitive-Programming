#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>> t;
    while(t--){
        int n;
        cin>> n;
        vector<int>a(n);
        for(int i=0;i<n;i++){
            cin>> a[i];
        }
        bool sort=true;
        for(int i=0;i<n-1;i++){
            if(a[i]>a[i+1]){
                sort=false;
            }
        }
        if(sort){
            cout<< n << endl;
        }
        else{
            cout<< 1 << endl;
        }
    }
    return 0;
}