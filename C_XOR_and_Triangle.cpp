#include<bits/stdc++.h>
using namespace std;

bool cek(int a){
    return (a&(a-1))==0;
}

void solve(){
    int n; cin >> n;
    if(cek(n) || cek(n+1)){
        cout << -1;
        return;
    }
    int x = 1;
    while(x*2<n) x*=2;
    cout << x-1;
}
 
int main(){
    int t; cin >> t;
    while(t--){
        solve();
        cout << "\n";
    }
    return 0;
}