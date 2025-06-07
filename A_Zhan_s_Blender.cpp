#include<bits/stdc++.h>
using namespace std;
    
void solve(){
    int n; cin >> n;
    int a, b; cin >> a >> b;
    cout << (n+min(a, b)-1)/min(a, b);
}
    
int main(){
    int t; cin >> t;
    while(t--){
        solve();
        cout << "\n";
    }
    return 0;
}