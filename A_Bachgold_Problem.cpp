#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    cout << n/2 << endl;
    while(n>0){
        if(n-2!=1) {
            cout << 2 << ' ';
            n-=2;
        }else {
            cout << 3 << ' ';
            n-=3;
        }
    }

    return 0;
}