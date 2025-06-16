#include<bits/stdc++.h>
using namespace std;
    
void solve(){
    int n; cin >> n;
    
    if(n%2){
        vector<int> a(n, 0);
        int x=1;
        a[n/2]=x++;
        for(int i=n/2+1;i<n;i++) a[i]=x++, a[n-i-1]=x++;
        for(auto i:a) cout << i << ' ';
    }else cout << -1;
}
    
int main(){
    int t; cin >> t;
    while(t--){
        solve();
        cout << '\n';
    }
    return 0;
}