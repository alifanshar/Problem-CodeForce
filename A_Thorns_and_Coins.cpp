#include<bits/stdc++.h>
using namespace std;
 
void solve(){
    int n, ans=0, x=0; cin >> n;
    string a; cin >> a;
    for(int i=0;i<n;i++){
        if(a[i]=='@') ans++;
        if(a[i]=='*') x++;
        else x=0;
        if(x==2) break;
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