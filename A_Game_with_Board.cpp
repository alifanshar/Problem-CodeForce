#include<bits/stdc++.h>
using namespace std;
    
void solve(){
    int n; cin >> n;
    if(n<=4) cout << "Bob";
    else cout << "Alice";
}
    
int main(){
    int t; cin >> t;
    while(t--){
        solve();
        cout << "\n";
    }
    return 0;
}