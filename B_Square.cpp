#include<bits/stdc++.h>
using namespace std;
    
void solve(){
    int a, b, c, d; cin >> a >> b >> c >> d;
    cout << ((a+d==c && c==b) || (b+c==a && a==d) || (a+c==b && b==d) || (b+d==c && c==a)?"Yes":"No");
}
    
int main(){
    int t; cin >> t;
    while(t--){
        solve();
        cout << '\n';
    }
    return 0;
}