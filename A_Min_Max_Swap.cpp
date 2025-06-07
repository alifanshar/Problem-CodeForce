#include<bits/stdc++.h>
using namespace std;
 
void solve(){
    int n; cin >> n;
    vector<int> a(n), b(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < n; i++) cin >> b[i];
    int max_a=0, max_b=0;
    for(int i=0;i<n;i++){
        max_a=max({a[i], b[i], max_a});
        max_b=max(min(a[i], b[i]), max_b);
    }
    cout << max_a*max_b;
}
 
int main(){
    int t; cin >> t;
    while(t--){
        solve();
        cout << "\n";
    }
    return 0;
}