#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n; cin >> n;
    vector<int> a(n);
    for(auto &i:a) cin >> i;
    
    int mx=*max_element(a.begin(), a.end()), mn=*min_element(a.begin(), a.end());
    if(mx==mn) cout << "NO";
    else{
        cout << "YES\n";
        for(auto i:a) cout << 1+(mx==i) << ' ';
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