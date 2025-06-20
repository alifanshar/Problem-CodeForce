#include<bits/stdc++.h>
using namespace std;
    
void solve(){
    int n; cin >> n;
    vector<int> a(n);
    for(auto &i:a) cin >> i;
    
    map<int, int> mp;
    int ans=0;
    for(int i=0;i<n;i++)
        mp[a[i]]++;
    for(auto i:mp) if(i.second>2) ans+=i.second/3;
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