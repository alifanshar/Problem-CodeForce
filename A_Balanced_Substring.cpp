#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    string s; cin >> s;
    int x=-1, y=-1;
    for(int i=1;i<n;i++) if(s[i-1]!=s[i]) x=i, y=i+1;
    cout << x << ' ' << y;
}

int main() {
    int t; cin >> t;
    while (t--) {
        solve();
        cout << "\n";
    }
    return 0;
}
