#include<bits/stdc++.h>
using namespace std;
    
void solve(){
    int n; cin >> n;
    if(n<=3) cout << n-1;
    else cout << (n%2?3:2);
}
    
int main(){
    int t; cin >> t;
    while(t--){
        solve();
        cout << '\n';
    }
    return 0;
}