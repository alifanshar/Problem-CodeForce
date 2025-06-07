#include<bits/stdc++.h>
using namespace std;
 
void solve(){
    int a, b, c, d; cin >> a >> b >> c >> d;
    int mx=max({a, b, c, d}), mn=min({a, b, c, d});
    if((mx==a && mn==d) || (mx==d && mn==a) || (mx==b && mn==c) || (mx==c && mn==b)) cout << "YES";
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