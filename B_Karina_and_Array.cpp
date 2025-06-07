#include<bits/stdc++.h>
using namespace std;
    
void solve(){
    int n; cin >> n;
    vector<long long> a(n);
    for(auto &x : a) cin >> x;
    sort(a.begin(), a.end());
    cout << max(a[0]*a[1], a[n-2]*a[n-1]);
}
    
int main(){
    int t; cin >> t;
    while(t--){
        solve();
        cout << "\n";
    }
    return 0;
}