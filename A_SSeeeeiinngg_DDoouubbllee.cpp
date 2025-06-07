#include <bits/stdc++.h>
using namespace std;

void solve() {
    string s; cin >> s;
    vector<char> a(s.length()*2);
    for(int i=0;i<s.length();i++) a[i]=s[i], a[s.length()*2-1-i]=s[i];

    for(auto i:a) cout << i;
}

int main() {
    int t; cin >> t;
    while (t--) {
        solve();
        cout << "\n";
    }
    return 0;
}
