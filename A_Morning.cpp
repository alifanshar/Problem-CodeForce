#include<bits/stdc++.h>
using namespace std;
    
void solve(){
    string a; cin >> a;
    int ans=4, x=1;
    for(int i=0;i<4;i++){
        if(a[i]=='0') ans+=abs(10-x), x=10;
        else ans+=abs(a[i]-'0'-x), x=a[i]-'0';
    }
    cout << ans;
}
    
int main(){
    int t; cin >> t;
    while(t--){
        solve();
        cout << "\n";
    }
    return 0;
}