#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n; cin >> n;
    int a, b; cin >> a >> b;
    bool cek=true;
    for(int i=0;i<n-2;i++){
        int x; cin >> x;
        if(i%2==0 && a%2!=x%2) cek=false;
        if(i%2==1 && b%2!=x%2) cek=false;
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