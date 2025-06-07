#include<bits/stdc++.h>
using namespace std;
    
void solve(){
    long long a, b, c, d; cin >> a >> b >> c >> d;
    long long ans=-1, x=d-b;
    if(x+a<c || b>d) cout << ans;
    else cout << x+(a+x-c);
}
    
int main(){
    int t; cin >> t;
    while(t--){
        solve();
        cout << "\n";
    }
    return 0;
}