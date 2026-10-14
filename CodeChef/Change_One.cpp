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
        sort(a.begin(),a.end());
        if(n<=2){
            cout<< 0 << endl;
        }
        else{
            int mx=a[n-1]-a[1];
            int mn=a[n-2]-a[0];
            cout<< min(mx,mn) << endl;
        }
    }
    return 0;
}