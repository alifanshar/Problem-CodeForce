#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n; cin >> n;
    vector<long long> a(n);
    for(auto &x : a) cin >> x;
    long long x=accumulate(a.begin(), a.end(), 0LL)/n;
    long long y=a[0]-x;
    bool cek=true;
    for(int i=1;i<n;i++){
        if(y<0) cek=false;
        if(a[i]>=x) y+=a[i]-x;
        else y-=abs(x-a[i]);
    }
    if(cek) cout << "YES";
    else cout << "NO";
}

int main(){
    int t; cin >> t;
    while(t--){
        solve();
        cout << "\n";
    }
    return 0;
}