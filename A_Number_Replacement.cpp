#include<bits/stdc++.h>
using namespace std;
    
void solve(){
    int n; cin >> n;
    vector<int> a(n);
    for(auto &i:a) cin >> i;
    map<int, char> mp;
    string x, y;
    for(int i=0;i<n;i++){
        char p; cin >> p;
        x.push_back(p);
        mp[a[i]]=p;
    }

    for(int i=0;i<n;i++) y.push_back(mp[a[i]]);

    if(x==y) cout << "YES";
    else cout << "NO";
}
    
int main(){
    int t; cin >> t;
    while(t--){
        solve();
        cout << "\n";
    }
    return 0;
}