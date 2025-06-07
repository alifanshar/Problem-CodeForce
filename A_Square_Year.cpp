#include<bits/stdc++.h>
using namespace std;
    
void solve(){
    string a; cin >> a;
    int n=stoi(a);
    if((double)sqrt(n)==(int)sqrt(n)) cout << (int)sqrt(n) << " 0";
    else cout << -1;
}
    
int main(){
    int t; cin >> t;
    while(t--){
        solve();
        cout << "\n";
    }
    return 0;
}