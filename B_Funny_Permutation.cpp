#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;

    if(n==3){ 
        cout << -1;
        return;
    }
    for(int i=(n+1)/2+1;i<=n;i++) cout << i << ' ';
    for(int i=1;i<=(n+1)/2;i++) cout << i << ' ';
}

int main() {
    int t; cin >> t;
    while (t--) {
        solve();
        cout << "\n";
    }
    return 0;
}
