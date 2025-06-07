#include<bits/stdc++.h>
using namespace std;
    
void solve(){
    int n; cin >> n;
    int ans=0, c=0;
    bool cek=false;
    for(int i=0;i<n;i++){
        int x; cin >> x;
        if(x==1) cek=true;
        if(cek && x==0) c++;
        else ans+=c, c=0;
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