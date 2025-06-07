#include<bits/stdc++.h>
using namespace std;
 
void solve(){
    int n; cin >> n;
    map<string, int> mp;
    mp["00"] = mp["01"] = mp["10"] = mp["11"] = 1e9;
    for(int i=0;i<n;i++){
        int x; cin >> x;
        string s; cin >> s;
        mp[s]=min(mp[s], x);
    }
    long long ans = min(mp["01"]+mp["10"], mp["11"]);
    if(ans>=1e9) cout << -1;
    else cout << ans;
}
 
int main(){
    int t; cin >> t;
    while(t--){
        solve();
        cout << "\n";
    }
    return 0;
}