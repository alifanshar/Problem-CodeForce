#include<bits/stdc++.h>
using namespace std;
    
void solve(){
    int n; cin >> n;
    vector<int> a(n), b;
    for(auto &i:a) cin >> i;
    
    sort(a.begin(), a.end());
    for(int i=0;i<n;i++){
        if(i+1!=n && a[i]==a[i+1]){
            b.push_back(a[i]);
            continue;
        }
        cout << a[i] << ' ';
    }
    for(auto i:b) cout << i << ' ';
}
    
int main(){
    int t; cin >> t;
    while(t--){
        solve();
        cout << '\n';
    }
    return 0;
}