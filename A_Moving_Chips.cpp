#include<bits/stdc++.h>
using namespace std;
    
void solve(){
    int n; cin >> n;
    vector<int> a(n);
    for(auto &i:a) cin >> i;

    bool cek=false;
    int ans=0, x=0;
    for(int i=0;i<n;i++){
        if(a[i]==1 && !cek) cek=true;
        if(a[i]==0 && cek) x++;
        else ans+=x, x=0;
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