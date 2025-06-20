#include<bits/stdc++.h>
using namespace std;
    
void solve(){
    string s; cin >> s;
    vector<string> a={"13", "17", "19", "23", "29", "31", "37", "41", "43", "47", "53", "59", "61", "67", "71", "73", "79", "83", "89", "97"};
    int n=s.length();
    for(int i=0;i<n;i++) for(int j=i+1;j<n;j++){
        string f="";
        f+=s[i], f+=s[j];
        if(find(a.begin(), a.end(), f) != a.end()){
            cout << f;
            return;
        }
    }
    cout << -1;
}
    
int main(){
    int t; cin >> t;
    while(t--){
        solve();
        cout << '\n';
    }
    return 0;
}