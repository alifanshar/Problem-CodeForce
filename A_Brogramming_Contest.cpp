#include<bits/stdc++.h>
using namespace std;
    
void solve(){
    int n; cin >> n;
    string s; cin >> s;
    int ans=(s[0]=='0')?0:1;
    for(int i=1;i<n;i++) if(s[i-1]!=s[i]) ans++;
    cout << ans;
}
    
int main(){
    int t; cin >> t;
    while(t--){
        solve();
        cout << '\n';
    }
    return 0;
}