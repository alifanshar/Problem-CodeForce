#include<bits/stdc++.h>
using namespace std;
    
void solve(){
    vector<int> a(4);
    int x=0, y=0;
    for(int i=0;i<4;i++){
        cin >> a[i];
        (a[i]&1)?y++:x++;
    }
    if(y==0) cout << 0;
    else if(y==4) cout << 2;
    else cout << 1;
}
    
int main(){
    int t; cin >> t;
    while(t--){
        solve();
        cout << "\n";
    }
    return 0;
}