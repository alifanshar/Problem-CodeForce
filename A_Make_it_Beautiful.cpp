#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n; cin >> n;
    vector<int> a(n);
    for(auto &x : a) cin >> x;
    sort(a.begin(), a.end(), greater<int>());
    int sum=a[n-1];
    bool cek=false;
    for(int i=0;i<n-1;i++){
        if(a[i]==sum) cek=true;
        sum+=a[i];
    }
    if(cek) cout << "NO";
    else{
        cout << "YES\n" << a[n-1];
        for(int i=0;i<n-1;i++) cout << ' ' << a[i];
    }
}

int main(){
    int t; cin >> t;
    while(t--){
        solve();
        cout << "\n";
    }
    return 0;
}