#include<bits/stdc++.h>
using namespace std;
    
void solve(){
    int n; cin >> n;
    cout << (n/__gcd(n, 100-n))+((100-n)/__gcd(n, 100-n));
}
    
int main(){
    int t; cin >> t;
    while(t--){
        solve();
        cout << "\n";
    }
    return 0;
}