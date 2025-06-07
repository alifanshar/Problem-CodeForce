#include<bits/stdc++.h>
using namespace std;

void solve(){
    string a; cin >> a;
    cout << a.substr(0, a.size()-2) << 'i';
}

int main(){
    int t; cin >> t;
    while(t--){
        solve();
        cout << "\n";
    }
    return 0;
}