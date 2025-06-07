#include<bits/stdc++.h>
using namespace std;
    
void solve(){
    int n; cin >> n;
    string a, b; cin >> a >> b;
    a='0'+a+'0', b='0'+b+'0';
    int ans=0;
    for(int i=1;i<=n;i++){
        if(b[i]=='1' && a[i-1]=='1' && a[i-1]!='2') ans++, a[i-1]='2';
        else if(a[i]=='0' && b[i]=='1' && a[i]!='2') ans++, a[i]='2';
        else if(b[i]=='1' && a[i+1]=='1' && a[i+1]!='2') ans++, a[i+1]='2';
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