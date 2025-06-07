#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n, x=1; cin >> n;
    string a=to_string(n);
    for(int i=0;i<a.length()-1;i++){
        x*=10;
    }
    cout << n-x;
}

int main(){
    int t; cin >> t;
    while(t--){
        solve();
        cout << "\n";
    }
    return 0;
}