#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>> n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>> a[i];
    }
    int mx=0,mn=0;
    for(int i=0;i<n;i++){
        if(a[i]>a[mx]){
            mx=i;
        }
        else if(a[i]<=a[mn]){
            mn=i;
        }
    }
    int ans = mx + (n - 1 - mn);
    if(mx>mn){
        ans--;
    }
    cout<< ans << endl;
    return 0;
}