#include<bits/stdc++.h>
using namespace std;

void solve(){
    string a; cin >> a;
    int ans=0, x=0;
    bool cek=false;
    for(int i=0;i<a.length();i++){
        if(a[i]=='1' && !cek) cek=true;
        if(cek){
            if(a[i]=='0') ans++, x++;
            else x=0;
        }
    }
    cout << ans-x;
}

int main(){
    int t; cin >> t;
    while(t--){
        solve();
        cout << "\n";
    }
    return 0;
}