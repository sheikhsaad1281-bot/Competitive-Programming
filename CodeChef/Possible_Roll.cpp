#include <bits/stdc++.h>
using namespace std;

int main() {
    int x,k,y;
    cin>> x >> k >> y;
    bool find=false;
    for(int i=1;i<=x;i++){
        int mul=i*k;
        if(mul==y){
            find=true;
            break;
        }
    }

    if(find){
        cout<< "YES" << endl;
    }
    else{
        cout<< "NO" << endl;
    }
    return 0;
}