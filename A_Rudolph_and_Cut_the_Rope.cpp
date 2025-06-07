#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n, x=0; cin >> n;
    for(int i=0;i<n;i++){
        int a, b; cin >> a >> b;
        if(a-b>0) x++;
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