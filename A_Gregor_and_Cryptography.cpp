#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n; cin >> n;
    if(n%2==1) cout << 2 << ' ' << n-1;
    else cout << 2 << ' ' << n;
}

int main(){
    int t; cin >> t;
    while(t--){
        solve();
        cout << "\n";
    }
    return 0;
}