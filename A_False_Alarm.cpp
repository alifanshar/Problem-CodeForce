#include<bits/stdc++.h>
using namespace std;
    
void solve(){
    int n, x; cin >> n >> x;
    vector<int> a(n);
    for(auto &i:a) cin >> i;

    int c=0, b=0;
    bool cek=false;
    for(int i=0;i<n;i++){
        if(!cek && a[i]==1) c=i, cek=true;
        if(cek && a[i]==1) b=i;
    }

    if(b-c+1<=x) cout << "YES";
    else cout << "NO";
}
    
int main(){
    int t; cin >> t;
    while(t--){
        solve();
        cout << '\n';
    }
    return 0;
}