#include<bits/stdc++.h>
using namespace std;

void solve(){
    int a, b, c; cin >> a >> b >> c;
    int x=abs(a-b)*2;
    if(x<a || x<b || x<c) cout << -1;
    else (c+x/2<=x) ? cout << c+x/2 : cout << c-x/2;
}

int main(){
    int t; cin >> t;
    while(t--){
        solve();
        cout << "\n";
    }
    return 0;
}