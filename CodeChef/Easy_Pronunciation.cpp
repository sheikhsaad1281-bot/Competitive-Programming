#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>> t;
    while(t--){
        int n;
        cin>> n;
        string s;
        cin>> s;
        int con_cnt=0;
        bool find=false;
        for(int i=0;i<n;i++){
           if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u'){
            con_cnt=0;
           }
           else{
            con_cnt++;
            if(con_cnt>=4){
              find=true;
            }
           }
        }
        if(find){
            cout<< "NO" << endl;
        }
        else{
            cout<< "YES" << endl;
        }
    }
    return 0;
}