#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n, x=0; cin >> n;
    string a="meow", s; cin >> s;
    transform(s.begin(), s.end(), s.begin(),::tolower);
    bool cek=true;
    for(int i=0;i<n;i++){
        if(s[i]==a[x]) x++;
        if(s[i]!=a[x-1]) cek=false;
    }
    if(cek && x==4) cout << "YES";
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