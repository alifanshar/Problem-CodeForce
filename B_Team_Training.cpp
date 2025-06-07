#include<bits/stdc++.h>
using namespace std;
    
void solve(){
    int n, x; cin >> n >> x;
    vector<int> a(n);
    for(auto &i:a) cin >> i;
    sort(a.begin(), a.end(), greater<>());
    
    int ans=0, b=1e9, c=0;
    for(int i=0;i<n;i++){
        b=min(a[i], b), c++;
        if(b*c >= x) ans++, b=1e9, c=0;
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