#include<bits/stdc++.h>
using namespace std;
    
void solve(){
    string a; cin >> a;
    int x=0, y=0;
    for(int i=0;i<a.length();i++) (a[i]=='0')?x++:y++;
    if(x==y) cout << x-1;
    else cout << min(x, y);
}

int main(){
    int t; cin >> t;
    while(t--){
        solve();
        cout << "\n";
    }
    return 0;
}