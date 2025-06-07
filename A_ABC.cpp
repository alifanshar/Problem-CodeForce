#include<bits/stdc++.h>
using namespace std;
 
void solve(){
    int n; cin >> n;
    string s; cin >> s;
    if(n>2) cout << "NO";
    else{
        if(s[0]==s[1]) cout << "NO";
        else cout << "YES";
    }
}
 
int main(){
    int t; cin >> t;
    while(t--){
        solve();
        cout << "\n";
    }
    return 0;
}