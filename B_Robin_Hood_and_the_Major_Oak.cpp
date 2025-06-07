#include<bits/stdc++.h>
using namespace std;
 
void solve(){
    int n, k; cin >> n >> k;
    if(((n-k+1)%2==0 && ((k+2)/2)%2==1) || ((n-k+1)%2==1 && ((k+1)/2)%2==0)) cout << "YES";
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