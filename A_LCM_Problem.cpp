#include<bits/stdc++.h>
using namespace std;

void solve(){
    long long l, r; cin >> l >> r;
    if(l*2<=r) cout << l << ' ' << l*2;
    else cout << "-1 -1";
}

int main(){
    int t; cin >> t;
    while(t--){
        solve();
        cout << endl;
    }
    return 0;
}