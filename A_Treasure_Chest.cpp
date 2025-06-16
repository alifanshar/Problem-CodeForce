#include<bits/stdc++.h>
using namespace std;
    
void solve(){
    int x, y, k; cin >> x >> y >> k;
    if(x+k<y) cout << y+(y-(x+k));
    else cout << max(x, y);
}
    
int main(){
    int t; cin >> t;
    while(t--){
        solve();
        cout << '\n';
    }
    return 0;
}