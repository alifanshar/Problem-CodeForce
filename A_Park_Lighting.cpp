#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n, m; cin >> n >> m;
    if((n*m)%2==0) cout << n*m/2;
    else cout << n*m/2+1;
}

int main(){
    int t; cin >> t;
    while(t--){
        solve();
        cout << endl;
    }
    return 0;
}