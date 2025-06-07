#include<bits/stdc++.h>
using namespace std;
    
void solve(){
    int n; cin >> n;
    vector<int> a(n);
    int ans=0, x=0;
    for(int i=0;i<n;i++){
        cin >> a[i];
        x^=a[i];
    }
    for(int i=0;i<n;i++) if(x^a[i]==a[i]) ans=a[i];
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