#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>> t;
    while(t--){
        int n;
        cin>> n;
        vector<int>a(n);
        for(int i=0;i<n;i++){
            cin>> a[i];
        }
        int mx_sum=0;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
               int product =a[i]*a[j];
               int sum=0;
               while(product>0){
                sum +=product%10;
                product /=10;
               }
               if(sum>mx_sum){
                mx_sum=sum;
               }
            }
        }
        cout<< mx_sum << endl;
    }
    return 0;
}