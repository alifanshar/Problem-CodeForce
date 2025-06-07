#include<bits/stdc++.h>
using namespace std;
    
void solve(){
    int n; cin >> n;
    vector<int> a(n);
    for(auto &i:a) cin >> i;
    sort(a.begin(), a.end());
    int ans=n, x=a[0];
    for(int i=1;i<n;i++){
        ans=min(ans, x+(n-i));
        a[i]-=a[i-1];
        x+=a[i];
    }
    cout << min(ans, x);
}
    
int main(){
    int t; cin >> t;
    while(t--){
        solve();
        cout << "\n";
    }
    return 0;
}