#include<bits/stdc++.h>
using namespace std;

void solve(){
    string s; cin >> s;
    set<char> a;
    int ans=0;
    for(int i=0;i<s.length();i++){
        a.insert(s[i]);
        if(a.size()==4){
            ans++;
            a.clear();
            a.insert(s[i]);
        }
    }
    if(a.size()) ans++;
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