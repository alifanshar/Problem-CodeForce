#include<bits/stdc++.h>
using namespace std;

void solve(){
    vector<int> a(7);
    for(auto &i:a) cin >> i;
    cout << a[6]-a[5] << ' ' << a[6]-a[4] << ' ' << a[6] - (a[6]-a[5]) - (a[6]-a[4]);
}

int main(){
    int t; cin >> t;
    while(t--){
        solve();
        cout << "\n";
    }
    return 0;
}