#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n, a, b, c; cin >> n >> a >> b >> c;
    int x=n, y=n;
    x=min(x, a);
    y=min(y, b);
    cout << x+y+(min(n*2-(x+y), c));
}

int main(){
    int t; cin >> t;
    while(t--){
        solve();
        cout << "\n";
    }
    return 0;
}