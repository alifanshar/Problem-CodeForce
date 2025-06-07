#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n, m, ans=0; cin >> n >> m;
    vector<int> a(7);
    for(int i=0;i<n;i++){
        char c; cin >> c;
        a[c-'A']++;
    }
    for(int i=0;i<a.size();i++)
        if(a[i]<m) ans+=m-a[i];
    cout << ans;
}

int main(){
    int t; cin >> t;
    while(t--){
        solve();
        cout << endl;
    }
    return 0;
}