#include<bits/stdc++.h>
using namespace std;

void solve(){
    string s; cin >> s;
    if(s.substr(0, 2) != "10")cout << "NO";
    else{
        if(s.length()-2==1) (s[2]-'0' > 1) ? cout << "YES" : cout << "NO";
        else (s[2]-'0' > 0) ? cout << "YES" : cout << "NO";
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