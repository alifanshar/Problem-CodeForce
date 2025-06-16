#include<bits/stdc++.h>
using namespace std;
    
void solve(){
    int n, t; cin >> n >> t;
    vector<int> a(n), b(n);
    for(auto &i:a) cin >> i;
    for(auto &i:b) cin >> i;
    
    int ans=-1, x=0;
    for(int i=0;i<n;i++){
        if(t>=a[i] && b[i]>x) ans=i+1, x=b[i];
        t--;
        if(t==0) break;
    }
    cout << ans;
}
    
int main(){
    int t; cin >> t;
    while(t--){
        solve();
        cout << '\n';
    }
    return 0;
}