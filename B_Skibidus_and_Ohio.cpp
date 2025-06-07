#include<bits/stdc++.h>
using namespace std;

void solve(){
    string a; cin >> a;
    for(int i=0;i<a.size()-1;i++){
        if(a[i]==a[i+1]){
            cout << 1;
            return;
        }
    }
    cout << a.size();
}

int main(){
    int t; cin >> t;
    while(t--){
        solve();
        cout << "\n";
    }
    return 0;
}