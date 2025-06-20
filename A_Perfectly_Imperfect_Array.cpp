#include<bits/stdc++.h>
using namespace std;
    
void solve(){
    int n; cin >> n;
    vector<int> a(n);
    for(auto &i:a) cin >> i;
    
    bool cek=false;
    for(int i=0;i<n;i++){
        int x=sqrt(a[i]);
        if(x*x!=a[i]) cek=true;
    }
    cout << (cek ? "YES" : "NO");
}
    
int main(){
    int t; cin >> t;
    while(t--){
        solve();
        cout << '\n';
    }
    return 0;
}