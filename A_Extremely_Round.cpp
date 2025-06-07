#include<bits/stdc++.h>
using namespace std;
 
void solve(){
    string a; cin >> a;
    cout << (a.length()-1)*9+(a[0]-'0');
}
 
int main(){
    int t; cin >> t;
    while(t--){
        solve();
        cout << "\n";
    }
    return 0;
}