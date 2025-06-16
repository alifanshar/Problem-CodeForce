#include<bits/stdc++.h>
using namespace std;
    
void solve(){
    int n; cin >> n;
    cout << (n%3==1?"YES":"NO");
}
    
int main(){
    int t; cin >> t;
    while(t--){
        solve();
        cout << '\n';
    }
    return 0;
}