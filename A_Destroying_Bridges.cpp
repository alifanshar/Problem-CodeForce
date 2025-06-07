#include<bits/stdc++.h>
using namespace std;
    
void solve(){
    int n, k; cin >> n >> k;
    if(n-1>k) cout << n;
    else cout << 1;
}
    
int main(){
    int t; cin >> t;
    while(t--){
        solve();
        cout << "\n";
    }
    return 0;
}