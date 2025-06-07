#include<bits/stdc++.h>
using namespace std;
    
void solve(){
    set<char> a;
    for(int i=0;i<4;i++){
        char c; cin >> c;
        a.insert(c);
    }
    cout << a.size()-1;
}
    
int main(){
    int t; cin >> t;
    while(t--){
        solve();
        cout << "\n";
    }
    return 0;
}