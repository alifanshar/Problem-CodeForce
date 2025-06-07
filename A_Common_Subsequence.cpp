#include<bits/stdc++.h>
using namespace std;
    
void solve(){
    int n, m; cin >> n >> m;
    vector<int> a(n), b(m);
    for(auto &i:a) cin >> i;
    for(auto &i:b) cin >> i;

    int ans=0;
    for(int i=0;i<n;i++){
        auto it=find(b.begin(), b.end(), a[i]);
        if(it!=b.end()) ans=a[i];
    }

    cout << (ans?"YES\n1 ":"NO");
    if(ans) cout << ans;
}
    
int main(){
    int t; cin >> t;
    while(t--){
        solve();
        cout << "\n";
    }
    return 0;
}