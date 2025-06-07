#include<bits/stdc++.h>
using namespace std;
 
void solve(){
    long long n, m, x; cin >> n >> m >> x;
    if(x%n==0) cout << m*(n-1)+((x+n-1)/n);
    else cout << m*abs((x%n)-1)+((x+n-1)/n);
}
 
int main(){
    int t; cin >> t;
    while(t--){
        solve();
        cout << "\n";
    }
    return 0;
}