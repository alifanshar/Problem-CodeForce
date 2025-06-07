#include<bits/stdc++.h>
using namespace std;
    
void solve(){
    int n; cin >> n;
    vector<int> a(n);
    for(auto &i:a) cin >> i;
    int ans=0;
    n=10-n;
    for(int i=1;i<=n-1;i++) ans+=i;
    cout << 6*ans;
}
    
int main(){
    int t; cin >> t;
    while(t--){
        solve();
        cout << "\n";
    }
    return 0;
}