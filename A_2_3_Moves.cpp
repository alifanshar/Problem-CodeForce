#include<bits/stdc++.h>
using namespace std;

void solve(){
    long long n; cin >> n;
    if(n==1) cout << 2;
    else cout << (n+2)/3;
}

int main(){
    int t; cin >> t;
    while(t--){
        solve();
        cout << "\n";
    }
    return 0;
}