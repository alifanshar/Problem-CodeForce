#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n; cin >> n;
    char a; cin >> a;
    bool cek=true;
    for(int i=0;i<n;i++){
        char x; cin >> x;
        if(x<a && cek){
            cek=false;
            cout << a;
        }
        cout << x;
    }
    if(cek) cout << a;
}

int main(){
    int t; cin >> t;
    while(t--){
        solve();
        cout << "\n";
    }
    return 0;
}