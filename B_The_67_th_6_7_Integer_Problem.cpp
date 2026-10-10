#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>> t;
    while(t--){
        int a[7];
        int neg_sum=0;
        for(int i=0;i<7;i++){
            cin>> a[i];
        }
        sort(a,a+7);
        for(int i=0;i<6;i++){
             int mul=a[i]*-1;
             neg_sum +=mul;
        }
        int rem_sum=neg_sum+a[6];
        cout<< rem_sum << endl;
        
    }
    return 0;
}