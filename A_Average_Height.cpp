#include<bits/stdc++.h>
using namespace std;
    
void solve(){
    int n; cin >> n;
    vector<int> a(n), b;
    for(auto &i:a) cin >> i;
    
    for(int i=0;i<n;i++){
        if(a[i]%2==1) cout << a[i] << ' ';
        else b.push_back(a[i]);
    }
    for(auto i:b) cout << i << ' ';
}
    
int main(){
    int t; cin >> t;
    while(t--){
        solve();
        cout << "\n";
    }
    return 0;
}