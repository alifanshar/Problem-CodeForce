#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n, t, k, x; cin >> n >> t >> k;
    vector<int> a(n+1, 0);
    for(int i=0;i<n;i++){
        cin >> a[i];
        if(i+1==t) x=a[i];
    }
    sort(a.begin(), a.end(), greater<>());
    if(x==a[k-1] && x==a[k]) cout << "MAYBE";
    else if(x>=a[k-1]) cout << "YES";
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