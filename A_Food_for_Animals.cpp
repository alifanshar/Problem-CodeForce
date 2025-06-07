#include<bits/stdc++.h>
using namespace std;

void solve(){
    int a, b, c, x, y; cin >> a >> b >> c >> x >> y;
    x=max(0, x-a);
    y=max(0, y-b);
    if(x+y<=c) cout << "YES";
    else cout << "NO";
}

int main(){
    int t; cin >> t;
    while(t--){
        solve();
        cout << "\n";
    }
    return 0;
}