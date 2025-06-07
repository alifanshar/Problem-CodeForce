#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, k; cin >> n >> k;
    n*=2;
    vector<int> a(n);
    for(auto &i:a) cin >> i;
    bool cek=true;

    sort(a.begin(), a.end());
    for(int i=0;i<n/2;i++)
        if(a[i+n/2]-a[i]<k) cek=false;
    
    if(cek) cout << "YES";
    else cout << "NO";
}

int main() {
    int t; cin >> t;
    while (t--) {
        solve();
        cout << "\n";
    }
    return 0;
}
