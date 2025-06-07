#include<bits/stdc++.h>
using namespace std;
 
void solve(){
    int n, k, x=1; cin >> n >> k;
    for(int i=n-k;i<=n;i++) cout << i << ' ';
    for(int i=n-k-1;i>0;i--) cout << i << ' ';
}
 
int main(){
    int t; cin >> t;
    while(t--){
        solve();
        cout << "\n";
    }
    return 0;
}