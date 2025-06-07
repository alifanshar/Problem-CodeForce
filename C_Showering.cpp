#include<bits/stdc++.h>
using namespace std;

void solve(){
    long long n, a, b, c=0; cin >> n >> a >> b;
    bool cek=false;
    int x, y;
    for(int i=0;i<n;i++){
        cin >> x >> y;
        if(x-c>=a) cek=true;
        c=y;
    }
    if(b-c>=a) cek=true;
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