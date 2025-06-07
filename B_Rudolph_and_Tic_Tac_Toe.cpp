#include<bits/stdc++.h>
using namespace std;
    
void solve(){
    vector<string> a(3);
    for(auto &i:a) cin >> i;

    for(int i=0;i<3;i++){
        if(a[0][i]==a[1][i] && a[1][i]==a[2][i] && a[1][i]!='.'){
            cout << a[0][i];
            return;
        }
    }
    for(int i=0;i<3;i++){
        if(a[i][0]==a[i][1] && a[i][1]==a[i][2] && a[i][1]!='.'){
            cout << a[i][0];
            return;
        }
    }

    if((a[0][0]==a[1][1] && a[1][1]==a[2][2] || a[0][2]==a[1][1] && a[1][1]==a[2][0]) && a[1][1]!='.') cout << a[1][1];
    else cout << "DRAW";
}
    
int main(){
    int t; cin >> t;
    while(t--){
        solve();
        cout << "\n";
    }
    return 0;
}