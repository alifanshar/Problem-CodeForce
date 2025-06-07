#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n, m; cin >> n >> m;
    vector<string> s(n);
    string a="vika";
    for(auto &x : s) cin >> x;
    bool cek=false;
    int x=0;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(s[j][i]==a[x]){ 
                x++;
                break;
            }
        }
        if(x==4) cek=true;
    }
    if(cek) cout << "YES";
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