#include<bits/stdc++.h>
using namespace std;
    
void solve(){
    long long a, b, c; cin >> a >> b >> c;
    cout << (a+b+c)/2;
}

int main(){
    int t; cin >> t;
    while(t--){
        solve();
        cout << "\n";
    }
    return 0;
}