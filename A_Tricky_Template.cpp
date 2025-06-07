#include<bits/stdc++.h>
using namespace std;
    
void solve(){
    int n; cin >> n;
    string a, b, c; cin >> a >> b >> c;
    bool cek=false;
    for(int i=0;i<n;i++) if(a[i]!=c[i] && b[i]!=c[i]) cek=true;
    if(cek) cout << "YES";
    else cout << "NO";
}
    
int main(){
    int t; cin >> t;
    while(t--){
        solve();
        cout << "\n";
    }
    return 0;
}