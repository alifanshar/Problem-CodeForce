#include<bits/stdc++.h>
using namespace std;
    
void solve(){
    int n; cin >> n;
    vector<int> a(n);
    for(auto &i:a) cin >> i;

    int x=0, y=0;
    for(int i=0;i<n;i++) (i%2)?y=max(y, a[i]):x=max(x, a[i]);

    if(n%2) cout << max(x+(n/2+1), y+(n/2));
    else cout << max(x+(n/2), y+(n/2));
}
    
int main(){
    int t; cin >> t;
    while(t--){
        solve();
        cout << "\n";
    }
    return 0;
}