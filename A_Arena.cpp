#include<bits/stdc++.h>
using namespace std;
    
void solve(){
    int n; cin >> n;
    vector<int> a(n);
    for(auto &i:a) cin >> i;

    int ans=0, m=*min_element(a.begin(), a.end());
    for(int i=0;i<n;i++)
        if(m==a[i]) ans++;

    cout << n-ans;
}
    
int main(){
    int t; cin >> t;
    while(t--){
        solve();
        cout << "\n";
    }
    return 0;
}