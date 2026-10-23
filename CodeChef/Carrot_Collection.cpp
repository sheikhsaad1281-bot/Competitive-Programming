#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>> t;
    while(t--){
        int n,l,r;
        cin>> n >> l >> r;
        vector<int>a(n+1);
        for(int i=1;i<=n;i++){
            cin>> a[i];
        }
        int ans=0;
        int mx_ans=0;
        for(int i=1;i<=l-1;i++){
            ans +=a[i];
        }
        for(int i=r+1;i<=n;i++){
            mx_ans +=a[i];
        }
        cout<< max(ans,mx_ans) << endl;
    }
    return 0;
}