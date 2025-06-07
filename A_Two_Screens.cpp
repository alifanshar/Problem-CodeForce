#include<bits/stdc++.h>
using namespace std;
    
void solve(){
    string a, b; cin >> a >> b;
    int n=min(a.length(), b.length()), x=0;
    for(int i=0;i<n;i++){
        if(a[i]==b[i]) x++;
        else break;
    }
    if(x==0) cout << a.length()+b.length();
    else cout << x+1+(a.length()-x)+(b.length()-x);
}
    
int main(){
    int t; cin >> t;
    while(t--){
        solve();
        cout << "\n";
    }
    return 0;
}