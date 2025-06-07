#include<bits/stdc++.h>
using namespace std;
    
void solve(){
    int n, k; cin >> n >> k;
    int i=n, ans=0, x=1;
    n*=n;
    while(k>0){
        n-=i, x++, ans++, k-=i;
        if(x%2==0) i--, x=0;
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