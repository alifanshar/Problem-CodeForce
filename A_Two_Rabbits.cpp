#include <bits/stdc++.h>
using namespace std;

void solve() {
    int x, y, a, b; cin >> x >> y >> a >> b;
    if((y-x)%(a+b)==0) cout << (y-x)/(a+b);
    else cout << -1;
}

int main() {
    int t; cin >> t;
    while (t--) {
        solve();
        cout << "\n";
    }
    return 0;
}
