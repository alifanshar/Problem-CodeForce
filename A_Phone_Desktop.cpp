#include<bits/stdc++.h>
using namespace std;

void solve(){
    int x, y; cin >> x >> y;
    int z=(y+1)/2;
    x=max(0, x-(z*15-4*y));
    z+=(x+14)/15;
    cout << z;
}

int main(){
    int t; cin >> t;
    while(t--){
        solve();
        cout << "\n";
    }
    return 0;
}