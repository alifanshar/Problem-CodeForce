#include<bits/stdc++.h>
using namespace std;

void solve(){
    string a, b; cin >> a >> b;
    int x=0, y=a.find(b[0]);
    for(int i=1;i<b.length();i++){
        int z=a.find(b[i]);
        x+=abs(y-z);
        y=z;
    }
    cout << x;
}

int main(){
    int t; cin >> t;
    while(t--){
        solve();
        cout << "\n";
    }
    return 0;
}