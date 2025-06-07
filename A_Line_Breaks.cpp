#include<bits/stdc++.h>
using namespace std;
 
void solve(){
    int n, m; cin >> n >> m;
    int x=0, ans=0;
    bool cek=true;
    for(int i=0;i<n;i++){
        string a; cin >> a;
        if(a.size()+x<=m && cek) x+=a.size(), ans++;
        else cek=false;
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