#include<bits/stdc++.h>
using namespace std;
    
void solve(){
    int n, sum=0; cin >> n;
    vector<int> a(n);
    for(auto &i:a) cin >> i;

    bool cek=false, cek1=false;
    for(int i=1;i<n;i++){
        if(a[i-1]!=a[i]) cek1=true;
        if(a[i]==-1 && a[i-1]==a[i]) cek=true;
        sum+=a[i];
    }
    sum+=a[0];

    if(cek) cout << sum+4;
    else if(cek1) cout << sum;
    else cout << sum-4;
}
    
int main(){
    int t; cin >> t;
    while(t--){
        solve();
        cout << '\n';
    }
    return 0;
}