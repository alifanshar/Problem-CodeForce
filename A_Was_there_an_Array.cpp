#include<bits/stdc++.h>
using namespace std;
 
void solve(){
    int n; cin >> n;
    vector<int> a(n-2);
    for(auto &x : a) cin >> x;
    bool cek=true;
    for(int i=0;i<n-4;i++)
        if(i+2<n && a[i]==1 && a[i+1]==0 && a[i+2]==1) cek=false;
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