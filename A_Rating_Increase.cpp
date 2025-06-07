#include <bits/stdc++.h>
using namespace std;

void solve() {
    string a; cin >> a;
    int x=1;
    for(int i=1;i<a.length();i++){
        if(a[i]=='0') x=i+1;
        else break;
    }
    if(x==a.length()){
        cout << -1;
        return;
    }
    int b=stoi(a.substr(0, x)), c=stoi(a.substr(x, a.length()-x));
    if(b<c) cout << b << ' ' << c;
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
