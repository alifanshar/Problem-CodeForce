#include<bits/stdc++.h>
using namespace std;
    
void solve(){
    string s; cin >> s;
    bool cek=true;
    int a=0, b=0, c=0;
    for(int i=0;i<s.length();i++){
        if(s[i]=='r') a++;
        if(s[i]=='g') b++;
        if(s[i]=='b') c++;
        if(s[i]=='R') a--;
        if(s[i]=='G') b--;
        if(s[i]=='B') c--;
        if(a<0 || b<0 || c<0) cek=false;
    }
    if(cek) cout << "YES";
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