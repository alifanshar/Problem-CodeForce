#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n; cin >> n;
    if((n/2)%2==0 && n%2==0) cout << "YES";
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