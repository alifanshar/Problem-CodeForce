#include<bits/stdc++.h>
using namespace std;
    
void solve(){
    string s; cin >> s;
    set<char> a;
    for(int i=0;i<s.length()/2;i++) a.insert(s[i]);
    cout << (a.size()==1?"NO":"YES");
}
    
int main(){
    int t; cin >> t;
    while(t--){
        solve();
        cout << "\n";
    }
    return 0;
}