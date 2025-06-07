#include<bits/stdc++.h>
using namespace std;
    
void solve(){
    string a; cin >> a;
    if(a[0]<a[1]) cout << (a[0]-'a')*25+a[1]-'a';
    else cout << (a[0]-'a')*25+a[1]-'a'+1;
}
    
int main(){
    int t; cin >> t;
    while(t--){
        solve();
        cout << "\n";
    }
    return 0;
}