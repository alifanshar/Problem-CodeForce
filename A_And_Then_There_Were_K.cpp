#include<bits/stdc++.h>
using namespace std;

void solve(){
    int a, i; cin >> a;
    while(a){
        i=a-1;
        a&=i;
    }
    cout << i;
}

int main(){
    int t; cin >> t;
    while(t--){
        solve();
        cout << "\n";
    }
    return 0;
}