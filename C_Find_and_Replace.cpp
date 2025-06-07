#include<bits/stdc++.h>
using namespace std;
 
void solve(){
    int n; cin >> n;
    map<char, int> a;
    string s; cin >> s;
    for(int i=0;i<n;i++){
        if(a.find(s[i]) != a.end() ) continue;
        a[s[i]]=i%2;
    }
    bool cek=true;
    for(int i=0;i<n;i++) if(a[s[i]]!=i%2) cek=false;
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