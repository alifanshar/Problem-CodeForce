#include<bits/stdc++.h>
using namespace std;
    
void solve(){
    int l, r; cin >> l >> r;
    if(l==1 && r==1) cout << 1;
    else cout << r-l;
}

int main(){
    int t; cin >> t;
    while(t--){
        solve();
        cout << "\n";
    }
    return 0;
}