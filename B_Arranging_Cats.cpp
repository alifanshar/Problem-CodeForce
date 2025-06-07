#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n, x=0, y=0, z=0; cin >> n;
    string a, b; cin >> a >> b;
    for(int i=0;i<n;i++){
        if(a[i]=='1' && a[i]!=b[i]) x++;
        if(b[i]=='1' && a[i]!=b[i]) y++;
        if(a[i]!=b[i]) z++;
    }
    cout << z-min(x, y);
}

int main(){
    int t; cin >> t;
    while(t--){
        solve();
        cout << "\n";
    }
    return 0;
}