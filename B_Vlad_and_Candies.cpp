#include<bits/stdc++.h>
using namespace std;
    
void solve(){
    int n; cin >> n;
    vector<int> a(n);
    for(auto &i:a) cin >> i;
    sort(a.begin(), a.end());
    if(n==1) cout << (a[0]>1?"NO":"YES");
    else cout << (a[n-1]-a[n-2]>1?"NO":"YES");
}

int main(){
    int t; cin >> t;
    while(t--){
        solve();
        cout << "\n";
    }
    return 0;
}