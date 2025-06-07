#include<bits/stdc++.h>
using namespace std;
    
void solve(){
    int n, m; cin >> n >> m;
    vector<string> a(n);
    for(int i=0;i<n;i++) cin >> a[i];

    int ans=0, y=0;
    for(int i=0;i<n;i++){
        int x=m;
        bool cek=false;
        for(int j=0;j<m;j++) if(a[i][j]=='S') cek=true;
        if(!cek) ans+=x, y++;
    }
    for(int i=0;i<m;i++){
        int x=n-y;
        bool cek=false;
        for(int j=0;j<n;j++) if(a[j][i]=='S') cek=true;
        if(!cek) ans+=x;
    }
    cout << ans;
}
    
int main(){
    // int t; cin >> t;
    // while(t--){
        solve();
    //     cout << "\n";
    // }
    return 0;
}