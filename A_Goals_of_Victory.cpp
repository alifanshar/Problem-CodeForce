#include<bits/stdc++.h>
using namespace std;
 
void solve(){
    int n; cin >> n;
    vector<long long> a(n-1);
    for(int i=0;i<n-1;i++) cin >> a[i];
    int ans=0;
    for(int i=0;i<n-1;i++) ans+=a[i];
    cout << -ans;
}
 
int main(){
    int t; cin >> t;
    while(t--){
        solve();
        cout << "\n";
    }
    return 0;
}