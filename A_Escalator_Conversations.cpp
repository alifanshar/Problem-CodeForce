#include<bits/stdc++.h>
using namespace std;
 
void solve(){
    int n, m, k, h; cin >> n >> m >> k >> h;
    vector<int> a(n);
    for(auto &i : a) cin >> i;
    int ans=0;
    for(int i=0;i<n;i++){
        if((abs(a[i]-h)%k==0 && 0<abs(a[i]-h) && abs(a[i]-h)<k*m)) ans++;
    }
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