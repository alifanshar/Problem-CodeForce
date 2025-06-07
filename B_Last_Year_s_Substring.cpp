#include<bits/stdc++.h>
using namespace std;
    
void solve(){
    int n; cin >> n;
    string s; cin >> s;
    if(
        (s.substr(0, 3) == "202" && s.substr(n-1, 1) == "0") ||
        (s.substr(0, 2) == "20" && s.substr(n-2, 2) == "20") ||
        (s.substr(0, 1) == "2" && s.substr(n-3, 3) == "020") ||
        s.substr(0, 4) == "2020" || s.substr(n-4, 4) == "2020"
    ) cout << "YES";
    else cout << "NO";
}
    
int main(){
    int t; cin >> t;
    while(t--){
        solve();
        cout << "\n";
    }
    return 0;
}