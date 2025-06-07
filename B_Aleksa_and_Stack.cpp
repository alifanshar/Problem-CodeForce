#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n, x=1; cin >> n;
    for(int i=0;i<n;i++){
        cout << x << ' ';
        x+=2;
    }
}

int main(){
    int t; cin >> t;
    while(t--){
        solve();
        cout << "\n";
    }
    return 0;
}