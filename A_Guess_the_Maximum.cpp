#include<bits/stdc++.h>
using namespace std;
 
void solve(){
    int n; cin >> n;
    vector<int> a(n);
    for(auto &x : a) cin >> x;
    int m=a[0], m2=a[0], x=1e9;
    for(int i=1;i<n;i++){
        m=max(m, a[i]), m2=max(a[i-1], a[i]);
        x=min({m, m2, x});
    }
    cout << x-1;
}
 
int main(){
    int t; cin >> t;
    while(t--){
        solve();
        cout << "\n";
    }
    return 0;
}