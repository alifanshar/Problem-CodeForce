#include<bits/stdc++.h>
using namespace std;
    
void solve(){
    long long n, s; cin >> n >> s;
    cout << s/(n*n);
}
    
int main(){
    int t; cin >> t;
    while(t--){
        solve();
        cout << '\n';
    }
    return 0;
}