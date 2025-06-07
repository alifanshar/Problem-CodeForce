#include<bits/stdc++.h>
using namespace std;
    
void solve(){
    int n; cin >> n;
    vector<int> a(n);
    for(auto &i:a) cin >> i;

    int ans=1;
    bool cek=false;
    for(int i=1;i<n;i++){
        if(a[i-1]+1>=a[i]) a[i]=a[i-1];
        else ans++;
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