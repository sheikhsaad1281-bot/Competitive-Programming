#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>> t;
    while(t--){
        int n;
        cin>> n;
        string s,t;
        cin>> s >> t;
         bool find=true;
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        for(int i=0;i<n;i++){
            if(s[i]!=t[i]){
                find=false;
            }
        }
        if(!find){
            cout<< "NO" << endl;
        }
        else{
            cout<< "YES" << endl;
        }
    }
    return 0;
}