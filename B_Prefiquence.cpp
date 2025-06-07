#include<bits/stdc++.h>
using namespace std;
    
void solve(){
    int n, m; cin >> n >> m;
    string a; cin >> a;
    string b; cin >> b;
    int ans=0, cnt=0;
    for(int i=0;i<n;i++){
        bool cek=false;
        for(int j=cnt;j<m;j++){
            if(a[i]==b[j]) {ans++, cnt=j+1, cek=true; break;}
        }
        if(!cek) break;
        if(cnt>=m) break;
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