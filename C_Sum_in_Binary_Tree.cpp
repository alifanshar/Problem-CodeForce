#include<bits/stdc++.h>
using namespace std;

void solve(){
    long long n; cin >> n;
    long long a=n;
    while(n){
        a+=(n>>1);
        n>>=1;
    }
    cout << a;
}

int main(){
    int t; cin >> t;
    while(t--){
        solve();
        cout << "\n";
    }
    return 0;
}