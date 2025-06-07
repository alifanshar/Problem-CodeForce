#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n, m; cin >> n >> m;
    vector<string> a(n);
    for(auto &i:a) cin >> i;
    int ans=0;
    for(int i=0;i<n-1;i++) if(a[i][m-1]=='R') ans++;
    for(int i=0;i<m-1;i++) if(a[n-1][i]=='D') ans++;
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