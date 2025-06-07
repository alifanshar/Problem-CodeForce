#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n, x=0, ans=0; cin >> n;
    for(int i=0;i<n;i++){
        char a; cin >> a;
        if(a=='x'){
            x++;
            if(x>2) ans++;
        }else x=0;
    }
    cout << ans;
}

int main(){
    // int t; cin >> t;
    // while(t--){
        solve();
        cout << "\n";
    // }
    return 0;
}