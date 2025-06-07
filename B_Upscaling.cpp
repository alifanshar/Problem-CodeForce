#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n; cin >> n;
    for(int i=0;i<n*2;i++){
        for(int j=0;j<n*2;j++){
            if(((i/2)+(j/2))%2==0) cout << "#";
            else cout << ".";
        }
        cout << "\n";
    }
}

int main(){
    int t; cin >> t;
    while(t--){
        solve();
        // cout << endl;
    }
    return 0;
}