#include<bits/stdc++.h>
using namespace std;

void solve(){
    string pi="3141592653589793238462643383279", a; cin >> a;
    int x=0;
    for(int i=0;i<a.length();i++){
        if(pi[i]!=a[i]) break;
        x++;
    }
    cout << x;
}

int main(){
    int t; cin >> t;
    while(t--){
        solve();
        cout << "\n";
    }
    return 0;
}