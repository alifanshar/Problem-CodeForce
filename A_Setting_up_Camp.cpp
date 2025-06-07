#include<bits/stdc++.h>
using namespace std;
    
void solve(){
    int a, b, c; cin >> a >> b >> c;
    if((b%3)+c>=3 || b%3==0) cout << a+(b+c+2)/3;
    else cout << -1;
}
    
int main(){
    int t; cin >> t;
    while(t--){
        solve();
        cout << "\n";
    }
    return 0;
}