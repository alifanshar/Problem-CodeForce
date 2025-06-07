#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n, k, ans=0, p=0; cin >> n >> k;
    bool cek=false;
    for(int i=0;i<n;i++){
        char a; cin >> a;
        if(a=='B') cek=true;
        if(cek){
            p++;
            if(p==k) p=0, ans++, cek=false;
        }
    }
    if(cek) ans++;
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