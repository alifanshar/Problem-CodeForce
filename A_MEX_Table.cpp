#include <bits/stdc++.h>
using namespace std;

void solve() {
    int a, b; cin >> a >> b;
    cout << max(a, b)+1;
}

int main() {
    int t; cin >> t;
    while (t--) {
        solve();
        cout << "\n";
    }
    return 0;
}
