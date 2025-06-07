#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n; cin >> n;
    bool cek=true;
    vector<int> a(n+1, 0);
    int p; cin >> p;
    a[p-1]++;
    for(int i=1;i<n;i++){
        int x; cin >> x;
        if(a[x]==1 || a[x-2]==1) a[x-1]++;
        else cek=false;
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