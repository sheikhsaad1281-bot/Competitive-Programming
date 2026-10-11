#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>> t;
    while(t--){
        int n;
        cin>> n;
        int a[n+1];
        for(int i=1;i<=n;i++){
            cin>> a[i];
        }
        bool found=false;
        for(int i=1;i<n-1;i++){
            if(a[i+1]>a[i]){
                found = true;
            }
        }
        if(!found){
            cout<< "NO" << endl;
        }
        else{
            cout<< "YES" << endl;
        }
    }
    return 0;
}