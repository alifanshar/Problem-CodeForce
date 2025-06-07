#include<bits/stdc++.h>
using namespace std;
    
void solve(){
    int n, k; cin >> n >> k;
    vector<int> a(n);
    for(auto &i:a) cin >> i;

    for(int i=0;i<n;i++)
        k-=a[i];

    if(k<0) cout << abs(k);
    else cout << 0;
}
    
int main(){
    int t; cin >> t;
    while(t--){
        solve();
        cout << "\n";
    }
    return 0;
}