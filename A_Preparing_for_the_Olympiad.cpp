#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n; cin >> n;
    vector<int> a(n), b(n);
    for(auto &x : a) cin >> x;
    for(auto &x : b) cin >> x;
    int ans=a[n-1];
    for(int i=0;i<n-1;i++)
        ans+=max(0, a[i]-b[i+1]);
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