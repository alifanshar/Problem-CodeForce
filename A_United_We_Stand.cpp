#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n; cin >> n;
    vector<int> a(n),b, c;
    for(auto &x : a) cin >> x;
    sort(a.begin(), a.end());
    b.push_back(a[0]);
    for(int i=1;i<n;i++){
        if(b[0]==a[i]) b.push_back(a[i]);
        else c.push_back(a[i]);
    }
    if(b.size()==n) cout << -1;
    else{
        cout << b.size() << ' ' << c.size() ;
        cout << '\n';
        for(auto x : b) cout << x << ' ';
        cout << '\n';
        for(auto x : c) cout << x << ' ';
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