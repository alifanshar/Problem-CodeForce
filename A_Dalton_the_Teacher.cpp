#include<bits/stdc++.h>
using namespace std;
    
void solve(){
    int n; cin >> n;
    int ans=0;
    for(int i=1;i<=n;i++){
        int x; cin >> x;
        if(i==x) ans++;
    }
    cout << (ans+1)/2;
}
    
int main(){
    int t; cin >> t;
    while(t--){
        solve();
        cout << "\n";
    }
    return 0;
}