#include<bits/stdc++.h>
using namespace std;
    
void solve(){
    int a, b, d; cin >> a >> b >> d;
    if(((max(a, b)+min(a, b)-1)/min(a, b))-1<=d) cout << "YES";
    else cout << "NO";
}
    
int main(){
    int t; cin >> t;
    while(t--){
        solve();
        cout << "\n";
    }
    return 0;
}