#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>> t;
    while(t--){
        int n;
        cin>> n;
        vector<int>v(n+1);
        for(int i=1;i<=n;i++){
            cin>> v[i];
        }
        bool found=false;
        for(int i=1;i<=n;i++){
            if(v[i]==67){
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