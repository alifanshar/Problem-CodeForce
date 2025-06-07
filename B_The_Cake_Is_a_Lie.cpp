#include<bits/stdc++.h>
using namespace std;
 
void solve(){
    int n, m, k; cin >> n >> m >> k;
    int x=n-1, y=m-1;
    if(x+n*y==k || y+m*x==k) cout << "YES";
    else cout << "NO";
}
 
int main(){
    int t; cin >> t;
    while(t--){
        solve();
        cout << "\n";
    }
    return 0;
}