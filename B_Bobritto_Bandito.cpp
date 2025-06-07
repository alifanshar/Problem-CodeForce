#include<bits/stdc++.h>
using namespace std;
    
void solve(){
    int n, m, l, r; cin >> n >> m >> l >> r;
    if(min(abs(l), r)>=m) cout << "0 " << m;
    else (abs(l)<r) ? cout << l << ' ' << m+l : cout << -(m-r) << ' ' << r;
}
    
int main(){
    int t; cin >> t;
    while(t--){
        solve();
        cout << "\n";
    }
    return 0;
}