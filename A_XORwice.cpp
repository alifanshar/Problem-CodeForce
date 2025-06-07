#include<bits/stdc++.h>
using namespace std;
 
void solve(){
    int a, b; cin >> a >> b;
    int ans=a^b;
    cout << ans;
}
 
int main(){
    int t; cin >> t;
    while(t--){
        solve();
        cout << "\n";
    }
    return 0;
}