#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n; cin >> n;
    vector<int> a(n);
    for(auto &i:a) cin >> i;
    for(int i=0;i<n;i++){
        int m; cin >> m;
        a[i]+=10;
        for(int j=0;j<m;j++){
            char x; cin >> x;
            if(x=='D') a[i]++;
            else a[i]--;
        }
    }
    for(auto i:a) cout << i%10 << ' ';
}

int main(){
    int t; cin >> t;
    while(t--){
        solve();
        cout << "\n";
    }
    return 0;
}