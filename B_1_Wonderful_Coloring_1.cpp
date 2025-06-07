#include<bits/stdc++.h>
using namespace std;
 
void solve(){
    string a; cin >> a;
    map<char, int> mp;
    for(int i=0;i<a.length();i++) mp[a[i]]++;
    int ans=0;
    for(auto i:mp) ans+= (i.second>1)? 2:1;
    cout << ans/2;
}
 
int main(){
    int t; cin >> t;
    while(t--){
        solve();
        cout << "\n";
    }
    return 0;
}