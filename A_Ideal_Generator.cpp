#include<bits/stdc++.h>
using namespace std;
    
void solve(){
    int n; cin >> n;
    cout << (n % 2 == 0 ? "NO" : "YES");
}
    
int main(){
    int t; cin >> t;
    while(t--){
        solve();
        cout << "\n";
    }
    return 0;
}