#include<bits/stdc++.h>
using namespace std;
    
void solve(){
    int n; cin >> n;
    vector<int> a(n);
    for(auto &i:a) cin >> i;

    int x=0;
    for(int i=0;i<n;i++) x^=a[i];

    if(n%2==0 && x!=0) cout << -1;
    else cout << x;
}
    
int main(){
    int t; cin >> t;
    while(t--){
        solve();
        cout << "\n";
    }
    return 0;
}