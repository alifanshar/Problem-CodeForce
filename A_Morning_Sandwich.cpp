#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n, a, b; cin >> n >> a >> b;
    if(n<=a+b) cout << n*2-1;
    else cout << (a+b)*2+1;
}
 
int main(){
    int t; cin >> t;
    while(t--){
        solve();
        cout << "\n";
    }
    return 0;
}