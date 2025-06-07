#include<bits/stdc++.h>
using namespace std;
    
void solve(){
    int n, k, r; cin >> n >> k >> r;
    vector<int> a(n);
    a[0]=k-r;
    int i=1;
    while(r){
        a[i]++, i++, r--;
        if(i==n) i=1;
    }

    for(auto i:a) cout << i << ' ';
}
    
int main(){
    int t; cin >> t;
    while(t--){
        solve();
        cout << "\n";
    }
    return 0;
}