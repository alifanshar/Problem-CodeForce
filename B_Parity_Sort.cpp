#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n; cin >> n;
    vector<int> x(n), a;
    for(int i=0;i<n;i++){
        cin >> x[i];
        a.push_back(x[i]);
    }
    bool cek=true;
    sort(a.begin(), a.end());
    for(int i=0;i<n;i++)
        if(x[i]%2!=a[i]%2) cek=false;
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