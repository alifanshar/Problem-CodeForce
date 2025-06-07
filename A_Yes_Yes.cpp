#include<bits/stdc++.h>
using namespace std;
 
void solve(){
    string a; cin >> a;
    string b="YesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYes";
    if(b.find(a)<100) cout << "YES";
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