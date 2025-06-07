#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n; cin >> n;
    string a; cin >> a;
    if(a[0]==a[n-1]) cout << "NO";
    else cout << "YES";
}
 
int main(){
    int t; cin >> t;
    while(t--){
        solve();
        cout << "\n";
    }
    return 0;
}