#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n, k; cin >> n >> k;
    for(int i=0;i<n;i++){
        char a='a';
        for(int j=0;j<k;j++){
            cout << a;
            a++;
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