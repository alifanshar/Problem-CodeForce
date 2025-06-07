#include<bits/stdc++.h>
using namespace std;
 
void solve(){
    int x, y; cin >> x >> y;
    if((x+1-y)%9==0 && x+1-y>=0) cout << "Yes";
    else cout << "No";
}
 
int main(){
    int t; cin >> t;
    while(t--){
        solve();
        cout << "\n";
    }
    return 0;
}