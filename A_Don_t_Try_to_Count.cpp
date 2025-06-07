#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n, m; cin >> n >> m;
    string a, b; cin >> a >> b;
    for(int i=0;i<6;i++){
        int x=a.find(b);
        if(x!=string::npos){
            cout << i;
            return;
        }
        a+=a;
    }
    cout << -1;
}

int main(){
    int t; cin >> t;
    while(t--){
        solve();
        cout << "\n";
    }
    return 0;
}