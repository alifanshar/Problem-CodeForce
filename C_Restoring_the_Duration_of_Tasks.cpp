#include<bits/stdc++.h>
using namespace std;
    
void solve(){
    int n; cin >> n;
    vector<int> s(n), f(n);
    for(auto &i:s) cin >> i;
    for(auto &i:f) cin >> i;

    cout << f[0]-s[0];
    for(int i=1;i<n;i++) cout << ' ' << f[i]-max(s[i], f[i-1]);
}
    
int main(){
    int t; cin >> t;
    while(t--){
        solve();
        cout << "\n";
    }
    return 0;
}