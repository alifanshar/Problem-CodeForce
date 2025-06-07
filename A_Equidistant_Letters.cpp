#include<bits/stdc++.h>
using namespace std;

void solve(){
    string s; cin >> s;
    sort(s.begin(), s.end());
    cout << s;
}

int main(){
    int t; cin >> t;
    while(t--){
        solve();
        cout << "\n";
    }
    return 0;
}