#include<bits/stdc++.h>
using namespace std;
    
void solve(){
    int n; cin >> n;
    vector<int> a(n);
    for(auto &i:a) cin >> i;
    
    cout << *max_element(a.begin(), a.end())-*min_element(a.begin(), a.end());
}
    
int main(){
    int t; cin >> t;
    while(t--){
        solve();
        cout << '\n';
    }
    return 0;
}