#include<bits/stdc++.h>
using namespace std;
 
void solve(){
    int n; cin >> n;
    vector<int> a(n);
    int m=100;
    for(int i=0;i<n;i++){
        cin >> a[i];
        m=min(m,a[i]);
    }
    int x=0;
    for(int i=0;i<n;i++) if(m==a[i]) x++;
    cout << n-x;
}
 
int main(){
    int t; cin >> t;
    while(t--){
        solve();
        cout << "\n";
    }
    return 0;
}