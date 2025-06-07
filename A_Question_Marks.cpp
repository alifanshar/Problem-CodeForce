#include<bits/stdc++.h>
using namespace std;
 
void solve(){
    int n, ans=0; cin >> n;
    map<char, int> mp;
    for(int i=0;i<n*4;i++){
        char x; cin >> x;
        if(x=='?') continue;
        mp[x]++;
    }
    for(auto i:mp)
        ans+=(n<i.second)?n:i.second;
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