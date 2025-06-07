#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n, ans=0; cin >> n;
    vector<int> a(n);
    for(auto &x : a) cin >> x;
    sort(a.begin(), a.end());
    for(int i=0;i<n/2;i++)
        ans+=a[n-i-1]-a[i];
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