#include<bits/stdc++.h>
using namespace std;
 
void solve(){
    int n, ge=0, ga=0; cin >> n;
    for(int i=0;i<n;i++){
        int x; cin >> x;
        if(x%2==0) ge++;
        else ga++;
    }
    if(ge<ga) cout << ge;
    else cout << ga;
}
 
int main(){
    int t; cin >> t;
    while(t--){
        solve();
        cout << "\n";
    }
    return 0;
}