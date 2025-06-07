#include<bits/stdc++.h>
using namespace std;
 
void solve(){
    int n; cin >> n;
    string s; cin >> s;
    bool cek=true, a=false;
    for(int i=1;i<n;i++){
        if(s[i]>'9') a=true;
        if(a){
            if(s[i]<'a') cek=false;
            if(s[i-1]>s[i]) cek=false;
        }else{
            if(s[i-1]>s[i]) cek=false;
        }
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