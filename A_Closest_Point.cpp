#include<bits/stdc++.h>
using namespace std;
 
void solve(){
    int n; cin >> n;
    vector<int> a(n);
    for(auto &x : a) cin >> x;
    if(n>2) cout << "NO";
    else cout << ((abs(a[0]-a[1])==1)? "NO" : "YES");
}
 
int main(){
    int t; cin >> t;
    while(t--){
        solve();
        cout << "\n";
    }
    return 0;
}