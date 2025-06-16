#include<bits/stdc++.h>
using namespace std;
    
void solve(){
    long long n; cin >> n;
    long long ans=1;
    while(n/4>0) n/=4, ans*=2;
    cout << ans;
}
    
int main(){
    int t; cin >> t;
    while(t--){
        solve();
        cout << '\n';
    }
    return 0;
}