#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n, k; cin >> n >> k;
    vector<vector<char>> a(n, vector<char>(n));
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            cin >> a[i][j];

    for(int i=0;i<n;i+=k){
        for(int j=0;j<n;j+=k){
            cout << a[i][j];
        }
        cout << "\n";
    }
}

int main(){
    int t; cin >> t;
    while(t--){
        solve();
        // cout << "\n";
    }
    return 0;
}