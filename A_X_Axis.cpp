#include<bits/stdc++.h>
using namespace std;

void solve(){
    int a, b, c; cin >> a >> b >> c;
    cout << abs(max({a,b,c})-min({a,b,c}));
}

int main(){
    int t; cin >> t;
    while(t--){
        solve();
        cout << endl;
    }
    return 0;
}