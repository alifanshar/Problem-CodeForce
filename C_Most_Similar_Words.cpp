#include<bits/stdc++.h>
using namespace std;
 
void solve(){
    int n, m; cin >> n >> m;
    vector<string> s(n);
    for(auto &x : s) cin >> x;
    int ans = 2e5;
    for(int i=1;i<n;i++){
        for(int j=0;j<n;j++){
            int x=0;
            if(i==j) continue;
            for(int k=0;k<m;k++){
                x+=abs(s[i][k]-s[j][k]);
            }
            ans=min(ans, x);
        }
    }
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