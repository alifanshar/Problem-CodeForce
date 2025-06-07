#include<bits/stdc++.h>
using namespace std;

void solve(){
    string a; cin >> a;
    char b; cin >> b;
    bool cek=false;
    for(int i=0;i<a.length();i+=2)
        if(a[i]==b) cek=true;
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