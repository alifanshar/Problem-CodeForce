#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n; cin >> n;
    if(n%2==0) cout << n/2 << ' ' << n/2;
    else cout << 1 << ' ' << n-1;
}

int main(){
    int t; cin >> t;
    while(t--){
        solve();
        cout << endl;
    }
    return 0;
}