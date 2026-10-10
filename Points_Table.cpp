#include <bits/stdc++.h>
using namespace std;

int main() {
    int x,y,a,b;
    cin>> x >> y >> a >> b;
    if(x>a){
        cout<< "Alice" << endl;
    }
    else if(x<a){
        cout<< "Bob" << endl;
    }
    else{
        if(y>b){
            cout<< "Alice" << endl;
        }
        else if(y<b){
            cout<< "Bob" << endl;
        }
        else{
            cout<< "Alice" << endl;
        }

    }
    
    return 0;
}