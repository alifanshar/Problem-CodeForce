#include<bits/stdc++.h>
using namespace std;

void solve(){
    long long n, m; cin >> n >> m;
    if(n==1) cout << 0;
    else if(n==2) cout << m;
    else cout << m*2;
}

int main(){
    int t; cin >> t;
    while(t--){
        solve();
        cout << endl;
    }
    return 0;
}