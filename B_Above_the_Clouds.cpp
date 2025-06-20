#include<bits/stdc++.h>
using namespace std;
    
void solve(){
    int n; cin >> n;
    string s; cin >> s;
    map<char, int> mp;
    for(int i=1;i<n-1;i++) mp[s[i]]++;

    bool cek=false;
    for(auto x:mp) if(x.second>1) cek=true;
    if(mp[s[0]]>0 || mp[s[n-1]]>0) cek=true;
    cout << (cek?"Yes":"No");
}
    
int main(){
    int t; cin >> t;
    while(t--){
        solve();
        cout << '\n';
    }
    return 0;
}