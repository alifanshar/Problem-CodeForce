#include<bits/stdc++.h>
using namespace std;
    
void solve(){
    int n; cin >> n;
    vector<int> a(n);
    for(auto &i:a) cin >> i;

    bool cek=true;
    int y=(2*a[0]-a[1])/(n+1);
    int x=y-a[0]+a[1];

    if(y<0 || x<0){
        cout << "NO";
        return;
    }

    for(int i=1;i<=n;i++) if(i*x+(n-i+1)*y!=a[i-1]) cek=false;
    
    // cout << x;
    cout << (cek? "YES":"NO");
}
    
int main(){
    int t; cin >> t;
    while(t--){
        solve();
        cout << '\n';
    }
    return 0;
}