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
        int a_cnt=0;
        int b_cnt=0;
        for(int i=0;i<n;i++){
            if(s[i]=='a'){
                a_cnt++;
            }
            else{
                b_cnt++;
            }
        } 
        cout<< a_cnt << " " << b_cnt << endl;
    }
    return 0;
}