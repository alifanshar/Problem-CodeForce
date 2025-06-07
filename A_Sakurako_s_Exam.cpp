#include<bits/stdc++.h>
using namespace std;

void solve(){
    int a, b; cin >> a >> b;
    int x=a+b*2;
    if(x%2==0 && (b%2==0 || a!=0)) cout << "YES";
    else cout << "NO";
}

int main(){
    int t; cin >> t;
    while(t--){
        solve();
        cout << "\n";
    }
    return 0;
}