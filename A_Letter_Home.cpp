#include<bits/stdc++.h>
using namespace std;
    
void solve(){
    int n, s; cin >> n >> s;
    vector<int> a(n);
    for(auto &i:a) cin >> i;
    
    if(s<a[0]) cout << a[n-1]-s;
    else if(a[n-1]<s) cout << s-a[0];
    else cout << a[n-1]-a[0]+min(s-a[0], a[n-1]-s);
}
    
int main(){
    int t; cin >> t;
    while(t--){
        solve();
        cout << '\n';
    }
    return 0;
}