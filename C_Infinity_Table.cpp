#include<bits/stdc++.h>
using namespace std;
    
void solve(){
    int n; cin >> n;
    int x=(int)sqrt(n), y=(x+1)*(x+1)-x*x;
    if(x*x==n) cout << x << " 1";
    else{
        if(n-x*x<=y/2) cout << n-x*x << ' ' << x+1;
        else cout << x+1 << ' ' << (x+1)*(x+1)-n+1;
    }
}
    
int main(){
    int t; cin >> t;
    while(t--){
        solve();
        cout << "\n";
    }
    return 0;
}