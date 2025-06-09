#include<bits/stdc++.h>
using namespace std;
    
void solve(){
    int n; cin >> n;
    vector<int> a(n);
    for(auto &i:a) cin >> i;
    
    set<int> x, y;
    int ans=0;
    for(int i=0;i<n;i++){
        x.insert(a[i]);
        y.insert(a[i]);
        if(x.size()==y.size()){
            ans++;
            x.clear();
        }
    }
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