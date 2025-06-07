#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n; cin >> n;
    string a; cin >> a;
    char x='-';
    for(int i=0;i<n;i++){
        if(x=='-') x=a[i];
        else if(x==a[i]){
            cout << x;
            x='-';
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