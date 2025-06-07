#include<bits/stdc++.h>
using namespace std;
    
void solve(){
    int a, b, c, d; cin >> a >> b >> c >> d;
    if((a>b && c>d) || (a<b && c<d)) cout << "YES";
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