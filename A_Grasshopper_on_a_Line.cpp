#include<bits/stdc++.h>
using namespace std;

void solve(){
    int x, k; cin >> x >> k;
    if(x%k==0) cout << 2 << endl << x-1 << ' ' << 1;
    else cout << 1 << endl << x;
}

int main(){
    int t; cin >> t;
    while(t--){
        solve();
        cout << "\n";
    }
    return 0;
}