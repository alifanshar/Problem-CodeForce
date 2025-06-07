#include<bits/stdc++.h>
using namespace std;
    
void solve(){
    string s; getline(cin, s);
    int n=s.length();
    for(int i=0; i<n; i++) if(i==0 || s[i-1]==' ') cout << s[i];
}

int main(){
    int t; cin >> t;
    string a;
    getline(cin, a);
    while(t--){
        solve();
        cout << "\n";
    }
    return 0;
}