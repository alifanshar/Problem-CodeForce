#include<bits/stdc++.h>
using namespace std;
 
void solve(){
    int n, m; cin >> n >> m;
    cout << (m/2)*n;
}
 
int main(){
    int t; cin >> t;
    while(t--){
        solve();
        cout << "\n";
    }
    return 0;
}