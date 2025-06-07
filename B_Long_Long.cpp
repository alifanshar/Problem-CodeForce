#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n; cin >> n;
    vector<long long> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    long long ans=0, sum=0;
    bool cek=false;
    for(int i=0;i<n;i++){
        sum+=abs(a[i]);
        if(!cek && a[i]<0) cek=true;
        if(cek && a[i]>0) ans++, cek=false;
    }
    if(cek) ans++;
    cout << sum << ' ' << ans;
}

int main(){
    int t; cin >> t;
    while(t--){
        solve();
        cout << "\n";
    }
    return 0;
}