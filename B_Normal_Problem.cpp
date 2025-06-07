#include<bits/stdc++.h>
using namespace std;

void solve(){
    string a; cin >> a;
    reverse(a.begin(), a.end());
    for(int i=0;i<a.length();i++){
        if(a[i]=='p') cout << 'q';
        else if(a[i]=='q') cout << 'p';
        else cout << a[i];
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