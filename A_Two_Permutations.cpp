#include<bits/stdc++.h>
using namespace std;
    
void solve(){
    int n, a, b; cin >> n >> a >> b;
    cout << (n-(a+b)>1 || (n==a && b==n)? "Yes":"No");
}
    
int main(){
    int t; cin >> t;
    while(t--){
        solve();
        cout << '\n';
    }
    return 0;
}