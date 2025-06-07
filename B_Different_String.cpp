#include<bits/stdc++.h>
using namespace std;

void solve(){
    string a; cin >> a;
    set<char> b(a.begin(), a.end());
    if(b.size()==1) cout << "NO";
    else{
        cout << "YES\n";
        string c=a;
        reverse(c.begin(), c.end());
        if(c!=a) cout << c;
        else{
            for(int i=1;i<a.length();i++) cout << a[i];
            cout << a[0];
        }
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