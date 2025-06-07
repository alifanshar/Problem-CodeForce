#include<bits/stdc++.h>
using namespace std;

void solve(){
    string t; cin >> t;
    vector<string> a(5);
    for(auto &i:a) cin >> i;
    for(int i=0;i<5;i++){
        if(a[i][0] == t[0] || a[i][1] == t[1]){
            cout << "YES";
            return;
        }
    }
    cout << "NO";
}

int main(){
    solve();
    return 0;
}