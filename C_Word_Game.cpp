#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n; cin >> n;
    vector<vector<string>> a(3, vector<string>(n));
    map<string, int> mp;
    for(int i=0;i<3;i++){
        for(int j=0;j<n;j++){
            cin >> a[i][j];
            mp[a[i][j]]++;
        }
    }
    for(int i=0;i<3;i++){
        int x=0;
        for(int j=0;j<n;j++){
            if(mp[a[i][j]]==1) x+=3;
            else if(mp[a[i][j]]==2) x++;
        }
        cout << x << ' ';
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