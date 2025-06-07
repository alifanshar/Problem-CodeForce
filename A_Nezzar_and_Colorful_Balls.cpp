#include<bits/stdc++.h>
using namespace std;
    
void solve(){
    int n; cin >> n;
    map<int, int> mp;
    for(int i=0;i<n;i++) {
        int x; cin >> x;
        mp[x]++;
    }

    int ans=0;
    for(auto i:mp) ans=max(ans, i.second);
    cout << ans;
}
    
int main(){
    int t; cin >> t;
    while(t--){
        solve();
        cout << "\n";
    }
    return 0;
}