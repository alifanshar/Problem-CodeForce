#include<bits/stdc++.h>
using namespace std;
    
void solve(){
    int n; cin >> n;
    vector<int> a(n), b(n, 0);
    for(auto &i:a) cin >> i;
 
    b[0]=(a[0]==1)?2:1;
    for(int i=1;i<n;i++) b[i]=(b[i-1]+1!=a[i])? b[i-1]+1:b[i-1]+2;
    cout << b[n-1];
}
    
int main(){
    int t; cin >> t;
    while(t--){
        solve();
        cout << "\n";
    }
    return 0;
}