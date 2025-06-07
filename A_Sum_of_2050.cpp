#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long n;
    cin >> n;

    if (n % 2050 != 0) {
        cout << -1;
        return;
    }

    n /= 2050;
    int ans = 0;

    while (n > 0) {
        ans += n % 10;
        n /= 10;
    }

    cout << ans;
}

int main() {
    int t; cin >> t;
    while (t--) {
        solve();
        cout << "\n";
    }
    return 0;
}
