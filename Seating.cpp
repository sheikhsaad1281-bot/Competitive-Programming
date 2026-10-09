#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>> t;
    while(t--){
        int n,m,k;
        cin>> n >> m >> k;
        int a[m];
        for(int i=0;i<m;i++){
            cin>> a[i];
        }
        int cnt=0;
        for(int i=1;i<=n;i++){
             bool avail=true;
            for(int j=0;j<m;j++){
                if(a[j]==i){
                    avail=false;
                }
            }
            if(avail){
                cout<< i << " ";
                cnt++;
            }
            if(cnt==k){
                break;
            }
        }
        cout<< endl;
    }
    return 0;
}