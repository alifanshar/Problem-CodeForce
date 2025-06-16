#include<bits/stdc++.h>
using namespace std;
    
void solve(){
    int n, k; cin >> n >> k;
    n-=k, k--;
    cout << (n+k-1)/k+1;
}
    
int main(){
    int t; cin >> t;
    while(t--){
        solve();
        cout << '\n';
    }
    return 0;
}