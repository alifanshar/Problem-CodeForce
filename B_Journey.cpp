#include<bits/stdc++.h>
using namespace std;
 
void solve(){
    long long n, a, b, c; cin >> n >> a >> b >> c;
    long long ans=(n/(a+b+c))*3, x=n%(a+b+c);
    if(x==0) cout << ans;
    else if(a>=x) cout << ans+1;
    else if(a+b>=x) cout << ans+2;
    else cout << ans+3;
}
 
int main(){
    int t; cin >> t;
    while(t--){
        solve();
        cout << "\n";
    }
    return 0;
}