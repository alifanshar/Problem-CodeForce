#include<bits/stdc++.h>
using namespace std;

void solve(){
    long long w, h, n, a; cin >> w >> h >> n;
    int x=0;
    a=w*h;
    while(true){
        if(a%2==0){
            x++;
            a/=2;
        }else break;
    }
    if(pow(2, x) >= n) cout << "YES\n";
    else cout << "NO\n";
}

int main(){
    int t; cin >> t;
    while(t--){
        solve();
    }
    return 0;
}