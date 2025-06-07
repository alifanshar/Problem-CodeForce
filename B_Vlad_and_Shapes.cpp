#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n, x, y; cin >> n;
    vector<vector<char>> a(n, vector<char>(n));
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin >> a[i][j];
            if(a[i][j]=='1'){
                x=i;
                y=j;
            }
        }
    }
    if(a[x][y]==a[x][y-1] && a[x][y]==a[x-1][y]) cout << "SQUARE";
    else cout << "TRIANGLE";
}

int main(){
    int t; cin >> t;
    while(t--){
        solve();
        cout << "\n";
    }
    return 0;
}