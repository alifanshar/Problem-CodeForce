#include<bits/stdc++.h>
using namespace std;
 
void solve(){
    int l, r, d, u; cin >> l >> r >> d >> u;
    if(l==r && r==d && d==u) cout << "Yes";
    else cout << "No";
}
 
int main(){
    int t; cin >> t;
    while(t--){
        solve();
        cout << "\n";
    }
    return 0;
}