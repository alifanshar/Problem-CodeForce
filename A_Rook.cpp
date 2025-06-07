#include<bits/stdc++.h>
using namespace std;

void solve(){
    string a, b="abcdefgh"; cin >> a;
    for(int i=0;i<8;i++) if(b[i] != a[0]) cout << b[i] << a[1] << endl;
    for(int i=1;i<=8;i++) if(i != a[1]-'0') cout << a[0] << i << endl;
}

int main(){
    int t; cin >> t;
    while(t--){
        solve();
        // cout << "\n";
    }
    return 0;
}