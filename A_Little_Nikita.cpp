#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n, m; cin >> n >> m;
    if(n-m>=0 && (n-m)%2==0) cout << "YES";
    else cout << "NO";
}

int main(){
    int t; cin >> t;
    while(t--){
        solve();
        cout << "\n";
    }
    return 0;
}