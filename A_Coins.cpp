#include<bits/stdc++.h>
using namespace std;

void solve(){
    long long n, k; cin >> n >> k;
    if(n%2==1 && k%2==0) cout << "NO";
    else cout << "YES";
}

int main(){
    int t; cin >> t;
    while(t--){
        solve();
        cout << "\n";
    }
    return 0;
}