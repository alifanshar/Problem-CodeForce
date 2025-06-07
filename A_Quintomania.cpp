#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n; cin >> n;
    vector<int> a(n);
    bool cek=true;
    cin >> a[0];
    for(int i=1;i<n;i++){
        cin >> a[i];
        if(abs(a[i]-a[i-1])!=5 && abs(a[i]-a[i-1])!=7) cek=false;
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