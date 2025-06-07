#include<bits/stdc++.h>
using namespace std;
    
void solve(){
    string s; cin >> s;
    for(int i=0;i<s.length();i++)
        cout << (i%2==0?(s[i]!='a'?'a':'b'):(s[i]!='z'?'z':'y')); 
}
    
int main(){
    int t; cin >> t;
    while(t--){
        solve();
        cout << "\n";
    }
    return 0;
}