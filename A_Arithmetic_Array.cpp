#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n, sum; cin >> n;
    vector<int> a(n);
    for(auto &i:a) cin >> i;
    sum = accumulate(a.begin(), a.end(), 0);
    if(sum-n<0) cout << 1;
    else cout << sum-n;
}

int main(){
    int t; cin >> t;
    while(t--){
        solve();
        cout << "\n";
    }
    return 0;
}