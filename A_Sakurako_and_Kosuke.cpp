#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n; cin >> n;
    if(n%2==0) cout << "Sakurako";
    else cout << "Kosuke";
}

int main(){
    int t; cin >> t;
    while(t--){
        solve();
        cout << "\n";
    }
    return 0;
}