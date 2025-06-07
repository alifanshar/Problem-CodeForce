#include<bits/stdc++.h>
using namespace std;
    
void solve(){
    int n; cin >> n;
    vector<int> a(n);
    for(auto &i:a) cin >> i;

    sort(a.begin(), a.end());
    cout << abs(a[1-1]-a[n-1-1])+abs(a[1]-a[n-1-1])+abs(a[1]-a[n-1])+abs(a[n-1]-a[1-1]);
}
    
int main(){
    int t; cin >> t;
    while(t--){
        solve();
        cout << "\n";
    }
    return 0;
}