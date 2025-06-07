#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long n; cin >> n;
    long long ans=1;
    while(n--) ans*=2;
    cout << ans-1;
}

int main() {
    int t; cin >> t;
    while (t--) {
        solve();
        cout << "\n";
    }
    return 0;
}
