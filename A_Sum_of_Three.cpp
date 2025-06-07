#include<bits/stdc++.h>
using namespace std;
    
void solve(){
    int n; cin >> n;
    if(n<=6 || n==9) cout << "NO";
    else{
        cout << "YES\n";
        if(n%3==0) cout << "1 4 " << n-5;
        else cout << "1 2 " << n-3;
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