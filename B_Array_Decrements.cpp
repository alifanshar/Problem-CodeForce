#include<bits/stdc++.h>
using namespace std;
    
void solve(){
    int n; cin >> n;
    vector<int> a(n), b(n);
    for(auto &i:a) cin >> i;
    
    bool cek=true;
    int x=-1e9;
    for(int i=0;i<n;i++){
        cin >> b[i];
        x=max(a[i]-b[i], x);
        if(a[i]<b[i]) cek=false;
    }
    
    for(int i=0;i<n;i++){
        if(a[i]-x<0 && b[i]==0) continue;
        if(a[i]-x!=b[i]) cek=false;
    }

    cout << (cek?"YES":"NO");
}
    
int main(){
    int t; cin >> t;
    while(t--){
        solve();
        cout << "\n";
    }
    return 0;
}