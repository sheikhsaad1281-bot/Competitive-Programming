#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>> t;
    while(t--){
        int n;
        long long m;
        cin>> n >> m;
        vector<int>a(n);
        for(int i=0;i<n;i++){
            cin>> a[i];
        }
        sort(a.begin(),a.end());
        int cnt=0;
        long long sum=0;
        
        for(int i=0;i<n;i++){
            long long x=sum+a[i];
            long long handsk=x*(x-1)/2;
            if(handsk<=m){
                sum=x;
                cnt++;
            }
            else{
                break;
            }
        }
        cout<< cnt << endl;
    }
    return 0;
}