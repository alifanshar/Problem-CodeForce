#include<bits/stdc++.h>
using namespace std;
    
void solve(){
    int n; cin >> n;
    string s; cin >> s;
    string t = s;
    reverse(t.begin(), t.end());
    if(s<=t) cout << s;
    else cout << t+s;
}
    
int main(){
    int t; cin >> t;
    while(t--){
        solve();
        cout << "\n";
    }
    return 0;
}