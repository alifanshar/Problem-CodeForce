#include<bits/stdc++.h>
using namespace std;
 
void solve(){
    int n, k, x; cin >> n >> k >> x;
    if(n*x<abs(k)) cout << -1;
    else cout << (abs(k)+x-1)/x;
}
 
int main(){
    int t; cin >> t;
    while(t--){
        solve();
        cout << "\n";
    }
    return 0;
}