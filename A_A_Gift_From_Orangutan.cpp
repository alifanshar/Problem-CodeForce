#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    vector<int> a(n);
    for(auto &i:a) cin >> i;

    sort(a.begin(), a.end());

    int ans=a[n-1]-a[0];
    cout << ans*(n-1);
}

int main() {
    int t; cin >> t;
    while (t--) {
        solve();
        cout << "\n";
    }
    return 0;
}
