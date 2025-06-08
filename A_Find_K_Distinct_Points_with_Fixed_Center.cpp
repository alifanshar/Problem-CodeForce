#include<bits/stdc++.h>
using namespace std;
    
void solve(){
    int a, b, n; cin >> a >> b >> n;
    int i;
    for(i=1;i<=(n-1)/2;i++){ 
        cout << -i << ' ' << -i << '\n' << i << ' ' << i << '\n';
    }
    if(n%2) cout << a*n << ' ' << b*n;
    else if(a==0 && b==0) cout << -i << ' ' << -i << '\n' << i << ' ' << i << '\n';
    else cout << "0 0\n" << a*n << ' ' << b*n;
}
    
int main(){
    int t; cin >> t;
    while(t--){
        solve();
        cout << '\n';
    }
    return 0;
}