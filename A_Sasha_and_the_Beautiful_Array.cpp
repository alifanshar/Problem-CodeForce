#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n, ans=0; cin >> n;
    vector<int> a(n);
    for(auto &i : a) cin >> i;
    sort(a.begin(), a.end());
    for(int i=1;i<n;i++) ans+=a[i]-a[i-1];
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