#include<bits/stdc++.h>
using namespace std;
    
void solve(){
    int n; cin >> n;
    cout << 1;
    for(int i=n;i>1;i--) cout << ' ' << i;
}
    
int main(){
    int t; cin >> t;
    while(t--){
        solve();
        cout << '\n';
    }
    return 0;
}