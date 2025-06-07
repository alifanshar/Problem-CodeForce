#include<bits/stdc++.h>
using namespace std;
 
void solve(){
    int x; cin >> x;
    vector<int> a(3);
    for(auto &x : a) cin >> x;
    bool cek=true;
    for(int i=0;i<3;i++){
        if(x==0){
            cek=false;
            break;
        }
        x=a[x-1];
    }
    if(cek) cout << "YES";
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