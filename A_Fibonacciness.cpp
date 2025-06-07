#include<bits/stdc++.h>
using namespace std;

void solve(){
    vector<int> a(4);
    for(auto &x : a) cin >> x;
    set<int> b;
    b.insert(a[0]+a[1]);
    b.insert(a[2]-a[1]);
    b.insert(a[3]-a[2]);
    cout << 4-b.size();    
}

int main(){
    int t; cin >> t;
    while(t--){
        solve();
        cout << "\n";
    }
    return 0;
}