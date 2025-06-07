#include<bits/stdc++.h>
using namespace std;
    
void solve(){
    string s; cin >> s;
    cout << s[0];
    bool cek=1;
    char b=(s[0]+1>'z')?s[0]-1:s[0]+1;
    for(int i=1;i<s.length();i++){
        b=(s[i]+1>'z')?s[i]-1:s[i]+1;
        if(s[i-1]==s[i] && cek) {cout << b; cek=0;}
        cout << s[i];
    }
    if(cek) cout << b;
}
    
int main(){
    int t; cin >> t;
    while(t--){
        solve();
        cout << "\n";
    }
    return 0;
}