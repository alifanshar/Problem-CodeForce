#include<bits/stdc++.h>
using namespace std;
    
void solve(){
    int n; cin >> n;
    vector<int> a(n);
    for(auto &i:a) cin >> i;
    sort(a.begin(), a.end());

    int ans=1;
    for(int i=(n+1)/2;i<n;i++)
        if(a[i]==a[i-1]) ans++;
        else break;
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