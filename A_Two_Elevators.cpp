#include<bits/stdc++.h>
using namespace std;

void solve(){
    int a, b, c; cin >> a >> b >> c;
    if(a-1==abs(b-c)+c-1) cout << 3;
    else if(a-1<abs(b-c)+c-1) cout << 1;
    else cout << 2;
}

int main(){
    int t; cin >> t;
    while(t--){
        solve();
        cout << endl;
    }
    return 0;
}