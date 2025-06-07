#include<bits/stdc++.h>
using namespace std;

void solve(){
    string x; cin >> x;
    int a=0, b=0, c=0;
    for(int i=0;i<x.length();i++){
        if(x[i]=='A') a++;
        if(x[i]=='B') b++;
        if(x[i]=='C') c++;
    }
    if(a+c==b) cout << "YES" << endl;
    else cout << "NO" << endl;
}

int main(){
    int t; cin >> t;
    while(t--)
        solve();
    return 0;
}