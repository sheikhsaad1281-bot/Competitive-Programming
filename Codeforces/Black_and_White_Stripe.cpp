#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>> t;
    while(t--){
        int n, k;
        cin>> n >> k;
        string s;
        cin>> s;
        
        int w_cnt=0;
        for(int i=0;i<k;i++){
            if(s[i]=='W'){
                w_cnt++;
            }
        }
        
        int ans = w_cnt;
        for(int i=k;i<n;i++){
            if(s[i-k]=='W'){
                w_cnt--;
            }
            if(s[i]=='W'){
                w_cnt++;
            }
            ans = min(ans, w_cnt);
        }
        cout<< ans << endl;
    }
    return 0;
}
