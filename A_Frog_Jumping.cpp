#include<bits/stdc++.h>
using namespace std;
 
void solve(){
    long long a, b, n; cin >> a >> b >> n;
    cout << (n-(n/2))*a-n/2*b;
}
 
int main(){
    int t; cin >> t;
    while(t--){
        solve();
        cout << "\n";
    }
    return 0;
}