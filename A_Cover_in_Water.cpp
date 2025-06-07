#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n, x=0, ans=0; cin >> n;
    bool cek=false;
    for(int i=0;i<n;i++){
        char c; cin >> c;
        if(c=='.') x++, ans++;
        else x=0;
        if(x>2) cek=true;
    }
    if(cek) cout << 2;
    else cout << ans;
}

int main(){
    int t; cin >> t;
    while(t--){
        solve();
        cout << "\n";
    }
    return 0;
}