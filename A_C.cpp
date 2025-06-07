#include<bits/stdc++.h>
using namespace std;

void solve(){
    int a, b, n; cin >> a >> b >> n;
    for(int i=0;i<n;i++){
        if(a<b) a+=b;
        else b+=a;
        if(a>n || b>n){
            cout << i+1;
            break;
        }
    }
}

int main(){
    int t; cin >> t;
    while(t--){
        solve();
        cout << endl;
    }
    return 0;
}